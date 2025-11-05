#include<bits/stdc++.h>
using namespace std;

class App{
    public:
        static int version;
        static int getVersion()
        {
            return version;
        }
};
int App::version=4;
int main()
{
    App a;
    cout << a.getVersion();
}