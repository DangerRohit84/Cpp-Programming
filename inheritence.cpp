#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};

class Student : public Person{
    public:
        int rollno;
        Student(string name,int age,int rollno) : Person(name,age)
        {
            this->rollno=rollno;
        }
};

class GradStudent : public Student{
    public:
        string PlacedCompany;
        GradStudent(string name,int age, int rollno,string PlacedCompany): Student(name,age,rollno)
        {
            this->PlacedCompany=PlacedCompany;
        }
};

int main()
{
    Person p1("Rohit",17);
    cout << p1.name << " " << p1.age << endl;
    Student s1("Suri",18,31);
    cout << s1.name << " " << s1.age << " " << s1.rollno << endl;
    GradStudent g1("Chakri",18,54,"Microsoft");
    cout << g1.name << " " << g1.age << " " << g1.rollno << " " << g1.PlacedCompany << endl;
    
}