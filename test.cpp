#include<bits/stdc++.h>
using namespace std;

class Bass{
    public:
    void virtual show()
    {
        cout << "Base Class" << endl;
    }
};

class Derived : public Bass{
    public:
    void show() override
    {
        cout << "Derived Class" << endl;
    }
};


int main()
{
    Bass *ptr;
    Derived D;
    ptr=&D;
    ptr->show();
    return 0;
}
