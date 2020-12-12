#include<iostream>
#include<memory>
#include<locale>
using namespace std;
//Феоктистов
//работа класса auto_ptr
int main()
{

	auto_ptr<int> a(new int), b; //cоздание "указателей".
	*a.get() = 123; //a.get() возвращает "нормальный" указатель на данные.
	cout << "*a.get() = " << *a.get() << endl;
	b = a;//после операции присваивания указатель a.get() принимает значение NULL.
	cout << "The assigment b = a has been executed. \n";
	if (a.get() == NULL)
		cout << "As a result a.get() is NULL. \n";
	cout << "*b.get() = " << *b.get() << endl;
	system("pause");
	return 0;
}