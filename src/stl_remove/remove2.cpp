#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;

bool onehigher(int x, int y)
{
	return x + 1 == y;
}
int main()
{
	int a[10] = { 3,4,3,1,6,7,7,7,8,4 };
	vector<int>v;
	vector<int>::iterator i;
	for (int k = 0; k < 10; k++) v.push_back(a[k]);
	i = unique(v.begin(), v.end(), onehigher);
	cout << "Logical contents of v:n";
	copy(v.begin(), i, ostream_iterator<int>(cout, " "));
	cout << "\nv.size() = " << v.size() << endl;
	return 0;
}