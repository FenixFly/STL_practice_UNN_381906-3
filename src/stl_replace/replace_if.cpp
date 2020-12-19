#include <iostream>
#include <algorithm>
using namespace std;

bool nonzero(int x) { return x != 0; }



int main()
{
	int a[5] = { 10,20,30,0,40 }; 
	replace_if(a, a + 5, [](int a) {return a !=0; }, 1); //принимает в качестве аргументов указатели на первый и последний, унарный предикат и значение на которое заменить
	cout << "After replace_if:\n";
	copy(a, a + 5, ostream_iterator<int>(cout, " "));
	cout << endl;
	replace(a, a + 5, 1, 9);
	cout << "After replace:\n";
	copy(a, a + 5, ostream_iterator<int>(cout, " "));
	cout << endl;
	sort(a, a + 5, [](int a, int b) {return a > b; });


	return 0;
}