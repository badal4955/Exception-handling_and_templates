#include <iostream>
using namespace std;

int main()
{
    try
    {
        int *p = new int[10000000];
        cout << "memory allocation is successfully\n";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "exception occured due to line 9:" << e.what() << endl;
    }
}