#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int plus1 (int x){return x + 1;}
int largersq(int x, int y) {return x>y ? x*x : y*y;}

int main()
{
    int a[5] = {2, -4, 3, 5, 1},
	    b[5] = {1, -3, 5, 2, 4};
	vector<int> result;
	//первая форма transform
	transform(a, a + 5,
		inserter(result, result.begin()), plus1);//указывается последовательность чисел (диапазон) и функция, преобразовывающая эту последовательность
	copy (result.begin(), result.end(),
		ostream_iterator<int>(cout, " "));
	cout << endl; //к каждому числу последовательности а прибавляется 1
	//вторая форма transform
	transform(a, a+5, b, result.begin(), largersq);// используется две последовательности
	copy(result.begin(), result.end(),
		ostream_iterator<int>(cout, " "));//вычисляет квадрат большего числа, сравнивая две последовательности
	cout << endl;
	return 0;
}