#include<iostream>
using namespace std;
class A
{
	public:
	void displayA()
	{
		cout<<"\nCalled A method called.";
	}
};

class B : public A
{
	public :
		void displayB()
		{
			cout<<"\nCalled B method called.";
		}
};

class C : public B
{
	public:
		void displayC()
		{
			cout<<"\nClass C method called.";
		}
};
main()
{
	C c;
	c.displayA();
	c.displayB();
	c.displayC();
}