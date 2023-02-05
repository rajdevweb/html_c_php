//hybrid Inherimetn 
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

class B: public A
{
   public:
   void displayB()
   {
   	cout<<"\nInside class B";
	   }	
};

class C : public A
{
	public:
		void displayC()
		{
			cout<<"\nInside class C";
		}
	
};
class D : public B, public C
{
	public:
		void displayD()
		{
			cout<<"\nInside class D.";
		}
};

main()
{    
   D obj;
   obj.displayD();
   obj.displayB();
   obj.displayB();
   obj.C::displayA();  //scope resolution operator (::)0
}
