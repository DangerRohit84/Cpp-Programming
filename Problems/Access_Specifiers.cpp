#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
        int balance;
    protected:
        int accountNumber;
    public:
        string holderName;
        void set_acc(int a)
        {
            accountNumber=a;
        }
        void set_balance(int b)
        {
            balance=b;
        }
        
        void get()
        {
            cout << "Account Details " << endl;
            cout << "Name: " << holderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Balance: " << balance << endl;
        }

};

int main()
{
    Account a1;
    a1.holderName="Rohit";
    a1.set_acc(84848484);
    a1.set_balance(1000);
    a1.get();

}