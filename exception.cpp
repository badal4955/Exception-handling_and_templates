// #include <iostream>
// using namespace std;

// class customer
// {
//     string name;
//     int balance, account_number;

// public:
//     customer(string name, int balance, int account_number)
//     {
//         this->name = name;
//         this->balance = balance;
//         this->account_number = account_number;
//     };
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             cout << amount << "rs is credited successfully\n";
//         }
//         else
//         {
//             cout << "amount should be greater than 0";
//         }
//     }

//     void withdraw(int amount)
//     {
//         if (amount > 0 && amount <= balance)
//         {
//             balance -= amount;
//             cout << amount << "rs is debited succcessfully";
//         }
//         else if (amount < 0)
//         {
//             cout << "amount should be greater than 0\n";
//         }
//         else
//         {
//             cout << "your balance is low";
//         }
//     }
// };
// int main()
// {
//     customer c1("Badal kumar", 5000, 10);
//     c1.deposit(100);
//     c1.withdraw(60);
//     return 0;
// }




#include <iostream>
using namespace std;

class customer
{
public:
    string name;          // Moved to public
    int balance;          // Moved to public
    int account_number;   // Moved to public

    customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    };

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << "rs is credited successfully\n";
        }
        else
        {
            throw "amount should be greater than 0";
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << "rs is debited successfully";
        }
        else if (amount < 0)
        {
            throw "amount should be greater than 0\n";
        }
        else
        {
            throw "your balance is low";
        }
    }
};

int main()
{
    customer c1("Badal kumar", 5000, 10);
    try{
    c1.deposit(100);
    c1.withdraw(6000);
    }
    catch(const char *e)
    {
        cout<<"Exception occured:"<<e<<endl;
    }
    return 0;
}