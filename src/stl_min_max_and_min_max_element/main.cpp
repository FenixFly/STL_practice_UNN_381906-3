#include <iostream>
#include <algorithm>
#include <functional>
#include <list>

#define MACROSS
//#define MINMAX
//#define MIN ELEMENT

#ifdef MACROSS
//создаём макросс минимума и максимума, используя тернарный оператор  сравнения
#define min(x,y) ((x)<(y) ? (x): (y))//если x<y ,то x
#define max(x,y) ((x)<(y) ? (y): (x))//если x<y, то y
#endif // MACROSS


using namespace std;

bool CompareLastDigit(int x, int y)
{
    return x % 10 < y % 10;
}

int main()
{
#ifdef MACROSS
    int x = 123, y = 75;
    cout << "max:" << max(x, y)<< " min:" << min(x, y);
#endif // MACROSS

#ifdef MINMAX
    int x = 123, y = 75, minimum, MaxLastDigit;
    minimum = min(x, y);//сравниеваем x и y с помошью функции min(<эл-т 1>,<эл-т 2>)
    MaxLastDigit = max(x, y, CompareLastDigit);//сравниеваем x и y с помошью функции max(<эл-т 1>,<эл-т 2>,<операция сравнения>)
    cout << minimum << " " << MaxLastDigit << endl;
#endif // MINMAX  
  
#ifdef MIN ELEMENT//поиск минимального элемента в списке
    int a[5] = { 10,30,5,40,20 }, * p,*tmp;//создаём массив a[]на 5 эл-во и указатель на int p
    list<int> L;//создаём список интов L
    L.insert(L.begin(), a, a + 5);//добавляем в начало списка элементы с a[0] до a[5]
    list<int>::iterator i;//создаём итератор i
  
    p = min_element(a, a + 5);//присваиваим указателю p адрес минимального элемента массива a
    //функция min_element() возвращает указатель на минимальный элемент
    tmp = &a[2];
    cout << min_element(a, a + 5) << " " << *tmp << endl;
    //----//
    i = min_element(L.begin(), L.end());//присваиваим итератору  i адрес минимального элемента списка L
    cout << *p << " " << *i << endl;
#endif // MIN ELEMENT 
      
    return 0;
}

