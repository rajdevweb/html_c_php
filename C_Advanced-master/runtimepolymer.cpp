#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"\nClass A method called. ";
			
		}
};
 
 class B : public A
 {
 	public:
 		void display()
 		{
 			cout<<"\nClass B method called. ";
		 }
 };
 
 main()
 {
 B b;
 b.A::display();
 b.display();
 }