//Лазарев Алексей
//Алгоритм count подсчитывает, какое количество элементов последовательности равно заданному значению. 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool found(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main()
{
	setlocale(LC_ALL, "Russian");
	//Подсчёт количества букв 'e'
	cout << "Подсчёт количесва букв e" << endl;
	
	char* p = "This demonstrate the Standart Template Library";
	
	int n = count(p, p + strlen(p), 'e');
	cout << "Количество букв 'e' = " << n << endl;

	cout << "_____________________________________________________________________________" << endl;
	

	//Подсчёт количества гласных a, e, i, o, u в строке
	cout << "Подсчёт количества гласных a, e, i, o, u в строке" << endl;
	char* s = "This demonstrate the Standart Template Library",
	*q = s + strlen(s);
	int m = (count(s, q, 'a') + count(s, q, 'e') + count(s, q, 'i') + count(s, q, 'o') + count(s, q, 'u'));
	cout << "Количествo гласных a, e, i, o, u в строке = " << m << endl;

	cout << "_____________________________________________________________________________" << endl;
	//с использованием count_if
	cout << "Подсчёт количества гласных a, e, i, o, u в строке при помощи count_if" << endl;
	char* s2 = "This demonstrate the Standart Template Library";
	int m2 = count_if(p, p + strlen(p), found);
	cout << "Количествo гласных a, e, i, o, u в строке = " << m2 << endl;

	return 0;
}
