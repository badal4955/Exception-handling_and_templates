// #include <iostream>
// using namespace std;

// class customer
// {
// public:
//     string name;          // Moved to public
//     int balance;          // Moved to public
//     int account_number;   // Moved to public

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
//             throw runtime_error("amount should be greater than 0");
//         }
//     }

//     void withdraw(int amount)
//     {
//         if (amount > 0 && amount <= balance)
//         {
//             balance -= amount;
//             cout << amount << "rs is debited successfully";
//         }
//         else if (amount < 0)
//         {
//             throw runtime_error("amount should be greater than 0\n");
//         }
//         else
//         {
//             throw runtime_error("your balance is low");
//         }
//     }
// };

// int main()
// {
//     customer c1("Badal kumar", 5000, 10);
//     try{
//     c1.deposit(100);
//     c1.withdraw(-8);
//     }
//     catch(const runtime_error &e)
//     {
//         cout<<"Exception occured:"<<e.what()<<endl;
//     }
//     return 0;
// }


