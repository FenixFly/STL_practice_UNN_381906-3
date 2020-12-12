#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;


int main()
{
    deque<int>test_deque;
    for (int i = 0; i < 10; i++)
    {
        test_deque.push_back(i * 5); //add elements 
    }
    test_deque.push_front(10);

    for (auto el : test_deque)
    {
        cout << el << " "; //deque output 
    }
    cout << endl;


    sort(test_deque.begin(), test_deque.end(), [](int a, int b) {return a > b; }); //sort deque by descending

    test_deque.pop_back(); //delete last element
    for (auto el : test_deque)
    {
        cout << el << " "; 
    }




    return 0;
}