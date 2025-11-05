#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        int rollno;
        string name;

        void intro(int n)
        {
            cout << "Student " << n << endl;
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollno << endl;
        }
};

int main()
{
    student s1;
    s1.rollno=54;
    s1.name="Chakri";
    student s2;
    s2.rollno=31;
    s2.name="Surendra";
    s1.intro(1);
    s2.intro(2);
}