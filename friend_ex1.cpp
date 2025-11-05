#include<bits/stdc++.h>
using namespace std;

class bank{
    private:
        int balance;
    public:
        int account_num;
        bank(int b,int a) : balance(b),account_num(a) {}
        friend void audit_account(bank acc);
};

void audit_account(bank acc)
{
    cout << "Account Number is " << acc.account_num << endl;
    cout << "Balance is " << acc.balance; 
}

int main()
{
    bank a(1000,848442);
    audit_account(a);
}