#include<iostream>
using namespace std;

class A //declartion of class
{
	int a;
	public:
	void input()
	{
		cout<<"\nEnter A = ";
		cin>>a;
	}
	void display()
	{
		cout<<"\nA = "<<a;
	}
};
main()
{
	A obj,obj2;
	
	obj.input();
	obj.display();
	
	obj2.input();
	obj2.display();
};