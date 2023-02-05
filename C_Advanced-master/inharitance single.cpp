#include <iostream>
using namespace std;
class A
{
public:
	void displayA()
	{
		cout << "\nCalled A method called.";
	}
};

class B : public A
{
public:
	void displayB()
	{
		cout << "\nCalled B method called.";
	}
};
main()
{
	B b;
	b.displayA();
	b.displayB();
};
