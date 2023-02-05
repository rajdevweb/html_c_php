#include<iostream>
using namespace std;

class A
{
	public:
		a()
		{
			cout<<"Default constructor called. ";
		}
		~A()
		{
			cout<<"Destructor called.";
			
		}
};
	main()
	{
		A a;
	}