#include<iostream>
using namespace std;

int main()
{
	int marks[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the marks of Student"<<i+1<<":";
		cin>>marks[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Marks of Student"<<i+1<<" is: "<<marks[i]<<endl;
	}
	return 0;
}
