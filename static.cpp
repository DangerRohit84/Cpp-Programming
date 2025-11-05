#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int roll;
        static string college;
        static int c;
        student(string name,int roll)
        {
            this->name=name;
            this->roll=roll;
            c++;
        }
        static void set_college(string s)
        {
            college=s;
        }
};
string student::college="AUS";
int student::c=0;
int main()
{
    student s1("Rohit",84);
    student s2("Chakri",54);
    student s3("Suri",31);
    cout << s3.c ;
}