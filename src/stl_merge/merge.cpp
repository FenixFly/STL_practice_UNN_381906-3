#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>

using namespace std;

int main()
{
	int a[5] = { 30,28,15,13,11 },
		b[4] = { 25,24,15,12 },
		c[9];
	merge(a, a + 5, b, b + 4, c, greater<int>());
	copy(c, c + 9, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}