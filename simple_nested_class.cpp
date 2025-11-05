#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int num=84;

        class B{
            public:
                void show()
                {
                    cout << "The is the inner class" << endl;
                }
        };
};

int main()
{
    A::B demo;
    demo.show();
}