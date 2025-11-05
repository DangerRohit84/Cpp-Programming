#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int rollno;
        Student(string name,int rollno)
        {
            this->name=name;
            this->rollno=rollno;
        }
};

class Teacher{
    public:
        string subject;
        Teacher(string subject){
            this->subject=subject;
        }
};

class TeachingAssisstant : public Student , public Teacher{
    public:
        string area;
        TeachingAssisstant(string name,int rollno,string subject,string area) : Student(name,rollno) , Teacher(subject){
            this->area=area;
        }
};


int main()
{
    Student s1("Rohit",84);
    Teacher t1("Biology");
    TeachingAssisstant ta1("Rohit",84,"Biology","Hospital");
    cout << ta1.name << " " << ta1.rollno << " " << ta1.subject << " " << ta1.area << endl;
    
}