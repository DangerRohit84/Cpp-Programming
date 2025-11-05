#include<bits/stdc++.h>
using namespace std;

class container{
    public:
        static int num;

        class inner{
            public:
                void see()
                {
                    cout << "Accessing the outer class from inner class num value is " << container::num << endl;
                }
        };
};

int container:: num=84;

int main()
{
    container :: inner n;
    n.see();
}