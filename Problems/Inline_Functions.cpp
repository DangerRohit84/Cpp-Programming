#include<bits/stdc++.h>
using namespace std;

class Calculator{
    public:
        int a,b;
        inline int add()
        {
            return a+b;
        }
        inline int diff()
        {
            return a-b;
        }
        inline int product()
        {
            return a*b;
        }
};

int main()
{
    Calculator demo;
    demo.a=10;
    demo.b=2;
    cout << "Add: " << demo.add() << endl;
    cout << "Substract: " << demo.diff() << endl;
    cout << "Product: " << demo.product() << endl;
}