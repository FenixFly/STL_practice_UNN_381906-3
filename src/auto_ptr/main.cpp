#include<iostream>
#include<memory>
using namespace std;
int main()
{
	auto_ptr<int> a(new int), b;
	*a.get() = 123;
	cout << "**a.get() = " << *a.get() << endl;
	b = a;
	cout << "The assigment b = a has been executed. \n";
	if (a.get() == NULL)
		cout << "As a result a.get() is NULL. \n";
	cout << "*b.get() = " << *b.get() << endl;
	system("pause");
	return 0;
}