#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int roll;
        string dept;
        static string college;
        student(string name,int roll,string dept)
        {
            this->name=name;
            this->roll=roll;
            this->dept=dept;
        }

};

string student::college="AUS";
int main()
{
    
    student s[3]={{"Rohit",84,"AIML"},{"Suri",31,"CSE"},{"Chakri",54,"DS"}};
    int i=0;
    while(i<3)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].dept << " " << s[i].college << endl;
        i++;
    }
}