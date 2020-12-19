#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<locale>
using namespace std;

bool multiple_of_three(int x) { return ((x % 3) == 0); }
//Феоктистов Андрей
//Работа алгоритмов remove_copy и remove_copy_if
int main()
{
	setlocale(LC_ALL, "rus");
	int Arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Array Arr: ";
	copy(Arr, Arr + 10, ostream_iterator<int>(cout, " "));
	vector<int> v;
	vector<int>::iterator new_end;
	
	remove_copy(Arr, Arr + 10, inserter(v, v.begin()), 6);
	cout << "\n \nAfter the execution of\n remove_copy(Arr, Arr + 10, inserter(v, v.begin), 6) \n vector v has the following contents: \n";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	v.erase(v.begin(), v.end());
	remove_copy_if(Arr, Arr + 10, inserter(v, v.begin()), multiple_of_three);
	cout << "\n \nAfter the execution of\n remove_copy(Arr, Arr + 10, inserter(v, v.begin), multiple_of_three) \n vector v has the following contents: \n";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	system("pause");
	return 0;




}