#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
        int length;
        int breadth;
        void area()
        {
            cout << "Area of Rectangle: " << length*breadth << endl;
        }
        void perimeter()
        {
            cout << "Perimeter of Rectangle: " << 2*(length+breadth) << endl;
        }
};

int main()
{
    Rectangle r1;
    r1.length=10;
    r1.breadth=5;
    r1.area();
    r1.perimeter();
}
