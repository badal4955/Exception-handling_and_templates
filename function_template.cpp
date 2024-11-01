#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
    cout << "total is :" << a + b;
}
int main()
{
    sum(5.3, 6.2);
    return 0;
}