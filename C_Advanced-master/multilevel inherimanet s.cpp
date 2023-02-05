#include<iostream>
using namespace std;
class A
{
   public:
   void displayA()
	{
   		cout<<"\nInside class A.";
	}	
};

class B
{
   public:
   void displayB()
   {
   	cout<<"\nInside class B";
	   }	
};

class C : public A, public B
{
	public:
		void displayC()
		{
			cout<<"\nInside class C";
		}
	
};

main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
}
