#include <iostream>
#include <iterator>
#include<algorithm>
using namespace std;

int main()
{
	int a[10] = { 3,4,3,3,4,4,5,3,3,3 }, * p;
	p = unique(a, a + 10);
	cout << "New logical contants of array a:\n";
	copy(a, p, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
