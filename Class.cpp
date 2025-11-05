// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     private:
//         int rollno,marks;
    
//     public:
//         string name,branch;
//         Student(string n,string b,int r,int m)
//         {
//             name=n;
//             branch=b;
//             rollno=r;
//             marks=m;
//         }
//         void mark_to(int m)
//         {
//             marks=m;
//         }
//         void mark_show()
//         {
//             cout << marks << endl;
//         }
//         void show()
//         {
//             cout <<" " << name <<" " << branch <<" " <<  rollno <<" " << marks << endl;
//         }
// };

// int main()
// {
//     Student s1("Rohit","AIML",84,90);
//     s1.show();
//     s1.mark_to(92);
//     s1.mark_show();
// }




// #include<bits/stdc++.h>
// using namespace std;

// class BankAccount
// {
//     private:
//         int balance, accountNumber;
//     public:
//         string holderName;
//         BankAccount(string h,int a,int b)
//         {
//             balance=b;
//             accountNumber=a;
//             holderName=h;
//         }
//         void deposit(int amount)
//         {
//             balance+=amount;
//             cout << amount << " is credited to account" << endl;
//         }
//         void withdraw(int amount)
//         {
//             if(amount > balance)
//             {
//                 cout << "Insufficient Balance!!!!" << endl;
//                 return;
//             }
//             balance-=amount;
//             cout << amount << " is debited from account" << endl;
//         }
//         void checkBalance()
//         {
//             cout << "The balance in account is " << balance << endl;
//         }
// };

// int main()
// {
//     BankAccount user1("Rohit",12039485,1000);
//     user1.checkBalance();
//     user1.deposit(200);
//     user1.withdraw(900);
//     user1.checkBalance();
// }


#include<bits/stdc++.h>
using namespace std;

class Product 
{
    private:
        int price;
        string stock;
    public:
        string productName, category;
        Product(string p,string c,int pr,string s)
        {
            productName=p;
            stock=s;
            price=pr;
            category=c;
        }
        void set_price_stock(int pr,string s)
        {
            price=pr;
            stock=s;
        }
        void get_price()
        {
            cout << "Stoke is " << stock << endl;
            cout << "The Price is " << price;
        }
        void display()
        {
            cout << "Product Name: " << productName << endl;
            cout << "Category: " << category << endl;
            cout << "Price: " << price << endl;
            cout << "Stock: " << stock << endl;
        }
};

int main()
{
    Product p1("Laptop", "Electronics",45000,"Avalible");
    p1.display();
    p1.set_price_stock(50000,"Unavalible");
    p1.get_price();
    
}
