//Лазарев Алексей
//Операции над множеством для сортированных контейнеров.

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

void show(const char* s, const int* begin, const int* end)
{
	cout << s << " ";
	copy(begin, end, ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[4] = { 1, 5, 7, 8 },
		b[3] = { 2, 5, 8 },
		sum[7], * pSumEnd,
		prod[4], * pProdEnd,
		dif[3], * pDifEnd,
		symdif[7], * pSymDifEnd;
	pSumEnd = set_union(a, a + 4, b, b + 3, sum);
	pProdEnd = set_intersection(a, a + 4, b, b + 3, prod);
	pDifEnd = set_difference(a, a + 4, b, b + 3, dif);
	pSymDifEnd = set_symmetric_difference(a, a + 4, b, b + 3, symdif);
	show("a:  ", a, a + 4);
	show("b:  ", b, b + 3);
	show("sum: ", sum, pSumEnd);
	show("prod: ", prod, pProdEnd);
	show("dif: ", dif, pDifEnd);
	show("simdif: ", symdif, pSymDifEnd);
	return 0;
}
