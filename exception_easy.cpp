#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw "division is not possible:";
        int c = a / b;
        cout << "answer is " << c;
    }
    catch (const char *e)
    {
        cout << "Exception error:" << e << endl;
    }
    return 0;
}