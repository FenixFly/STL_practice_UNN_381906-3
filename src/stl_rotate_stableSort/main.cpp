#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

struct rectype
{
	string s; int num;
	bool operator<(const rectype& b)const
	{
		return s < b.s;
	}
};

int main()
{
	//7.2.3
	//rotate
	cout << "Rotate" << endl;
	const int size = 4;
	int a[size] = { 10, 20, 30, 40 };
	cout << "Initial contents of array a: ";
	copy(a, a + 4, ostream_iterator<int>(cout, " "));
	
	rotate(a, a + 1, a + 4);
	cout << "\nAfter rotate(a, a+1, a+4):  ";

	copy(a, a + 4, ostream_iterator<int>(cout, " "));
	cout << endl;

	//rotate copy
	cout << "\nRotate copy" << endl;
	int b[size] = { 10, 20 ,30, 40 }, c[4];
	rotate_copy(b, b + 1, b + 4, c);

	cout << "After rotate\n";

	cout << "b: ";
	copy(b, b + 4, ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << "c: ";
	copy(c, c + 4, ostream_iterator<int>(cout, " "));
	cout << endl << endl;

	//7.3.3
	//stable_sort
	const int N = 20;
	string t[20] =
	{
		"Judy", "John", "John", "Judy", "John",
		"Judy", "Paul", "Judy", "Paul", "Mary",
		"Mary", "John", "Judy", "Paul", "John",
		"Paul", "Judy", "John", "Judy", "Judy"
	};

	int k;
	rectype d[N];

	//sort
	for (k = 0; k < N; k++)
	{
		d[k].s = t[k];
		d[k].num = 10 + k;
	}
	sort(d, d + N);
	for (k = 0; k < N; k++)
	{
		cout << d[k].s << " "
			<< d[k].num << (k % 5 == 4 ? "\n" : " ");
	}

	cout << endl<<endl;

	//stable_sort
	for (k = 0; k < N; k++)
	{
		d[k].s = t[k];
		d[k].num = 10 + k;
	}
	stable_sort(d, d + N);
	for (k = 0; k < N; k++)
	{
		cout << d[k].s << " "
			<< d[k].num << (k % 5 == 4 ? "\n" : " ");
	}
	return 0;
}