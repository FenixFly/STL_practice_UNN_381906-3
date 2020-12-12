//Захаров Алексей
#include <iostream>
#include <vector>
#include <algorithm> //sort()
using namespace std;

//function for topic 1.11
bool comparefun(int x, int y) {
	return x > y;
}

int main()
{
	//topic 1.4
	vector<int> v;
	int x;

	cout << "Enter positive integers, followed by 0:\n";
	while (cin >> x, x != 0) v.push_back(x);

	//sorting (сама сортировка)
	sort(v.begin(), v.end());
	cout << "After sorting: \n";

	vector<int>::iterator i;
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << "The end of topic 1.4" << endl;

	//topic 1.11
	const int N = 8;
	int a[N] = { 1234, 5432, 8943, 3345, 9831, 7842, 8863, 9820 };
	cout << "Before sorting:\n";
	copy(a, a + N, ostream_iterator<int>(cout, " "));
	cout << endl;
	//сортировка от бол к мен
	sort(a, a + N, comparefun);
	cout << "After sorting in descending order:\n";
	copy(a, a + N, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}