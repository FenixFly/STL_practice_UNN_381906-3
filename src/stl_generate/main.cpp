//Лазарев Алексей
//Вместо того чтобы использовать постоянное значение для заполнения
//контейнера, иногда желательно вычислить свое значение для каждого элемента
//Это можно сделать с помощью алгоритма generate(породить).

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
//В качестве третьего параметра этого алгоритма выступает функция или функциональный объект.
//Следующая программа помещает значения 10, 12, 16 и 18 в массив а:
struct funobj { //можно было использовать функцию вместо функционального объкета, но есть тонкость
	int i;
	funobj() : i(8) {}
	int operator ()() { return i += 2; }
};

int fun() {
	static int i = 8;
	return i += 2;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[5];
	generate(a, a + 5, funobj());
	copy(a, a + 5, ostream_iterator<int>(cout, " "));
	cout << endl;//вывод: 10 12 14 16 18

//_________________________________________________________________________________________
	
	list<int> b(5);
	generate_n(b.begin(), 5, fun);
	copy(b.begin(), b.end(), ostream_iterator<int>(cout, " "));
	cout << endl;//вывод: 10 12 14 16 18
	return 0;
}
