#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	int a[5];
	fill(a, a + 5, 123);
	copy(a, a + 5, ostream_iterator<int>(cout, " "));
	cout << endl;
	fill_n(a, 2, 456);
	copy(a, a + 5, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}