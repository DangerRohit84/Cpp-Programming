#include<iostream>
using namespace std;

class person
{
	public:
		string name;
		int age;
		string college;
		
		void introduce()
		{
			cout<<"What's your name? : "<<name<<endl;
			cout<<"What is your age: "<<age<<endl;
			cout<<"Which college are you studying: "<<college<<endl;
		}
		
};
int main()
{
	person person1;
	
	person1.name="Rohit";
	person1.age=17;
	person1.college="Aditya University";
	
	person1.introduce();
	
	return 0;
}
