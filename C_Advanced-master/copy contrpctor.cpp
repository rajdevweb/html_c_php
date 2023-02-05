#include <iostream>
using namespace std;
class A
{
	int x, y;

public:
	A()
	{
		cout << "Default constructor called!";
	}
	A(int a, int b)
	{
		cout << "Parameterized Constructor called!\n";
		x = a;
		y = b;
	}
	A(const A &old)
	{
		// old is the old object being passed
		x = old.x; // This object's x to old object's x
		y = old.y;

		cout << "Copy Constructor called!\n";
	}
	void print()
	{
		cout << x << " " << y << "\n";
	}
};
main()
{
	// A a; //sample code to show default constructor
	A obj(10, 20); // making a object of class A --- >implicit

	A obj2(obj); // Copy Constructor called old object "obj" is passed
	obj2.print();
}