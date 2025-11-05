#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a Positive number: ";
	cin>>a;
	cout<<"Your number is "<<a<<endl;
	fflush(stdin);
	string c;
	cout<<"Enter your name: ";
	cin>>c;
	cout<<"Hello! "<<c<<endl;
	fflush(stdin);
	string c1;
	cout<<"Enter your name: ";
	getline(cin,c1);
	cout<<"Hello! "<<c1;
}
