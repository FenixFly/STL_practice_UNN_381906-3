#include <iostream>
#include <algorithm>

using namespace std;

void display(int x) //функция вывода на экран, считает количество элементов
{
    static int i = 0;
    cout << "a[" << i++ << "] =" << x << endl;
}

int main() //Баринов Сергей
{
    const int N = 4; //количество элементов
    int a[N] = { 1234, 5432, 8943, 3346 };
    for_each(a, a + N, display); //для каждого элемента цикл вызовет функцию display 
    return 0;
}