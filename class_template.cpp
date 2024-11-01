// NORMAL CLASS

// #include<iostream>
// using namespace std;
// class demo{
// private:
// int num1,num2;
// public:
//     demo(int n1,int n2){
//         num1=n1;
//         num2=n2;
//     }
//     void check()
//     {
//         if(num1>num2)
//         {
//             cout<<num1<<" is largest number"<<endl;
//         }
//         else
//         {
//             cout<<num2<<" is largest number"<<endl;
//         }
//     }

// };
// int main(){
//     demo obj(5.8,5.2);
//     obj.check();
// }

// CLASS TEMPLATE

#include <iostream>
using namespace std;
template <class X>
class demo
{
private:
    X num1, num2;

public:
    demo(X n1, X n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void check()
    {
        if (num1 > num2)
        {
            cout << num1 << " is largest number" << endl;
        }
        else
        {
            cout << num2 << " is largest number" << endl;
        }
    }
};
int main()
{
    demo<float> obj(5.8, 5.2);
    demo <int> obj1(2,3);
    obj.check();
    obj1.check();
}