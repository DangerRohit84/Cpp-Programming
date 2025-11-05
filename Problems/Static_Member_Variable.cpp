#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
        static int count;
        Employee()
        {
            count++;
        }
};

int Employee::count=0;
int main()
{
    Employee E1;
    Employee E2;
    Employee E3;
    cout << E3.count;
}