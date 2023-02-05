#include<stdio.h>
using namespace std;
#include <iomanip>

class bank
{
	char name[20]
	int acno;
	char acttype[20];
	int bal;
	 
	public :
		void balance(void);
		void deposit(void);
		void withdraw(void);
		void display(void);
		
};

void bank :: balance(void) 
        {
        	cout<<end1<<end1;
        	cout<<"Enter Name" ;
        	cout<<name;
        	cout<<"Enter A/c no. :;
        	cout<<acno;
        	cout<<"Enter A\n Type. :;
        	cin>>actype;
        	cout<<"Enter Opening Balance : ";
        	cin>>bal;
		}
		
		void bank :: deposit(void)
		{
			int withdrwal;
			cout<<"\nAfter Withdrwal balance";
			cout<<"\nEnter withdrawal Ammount";
			cin>>withdraw;
		
		}
		if(bal>withdrawal)
		{
			balance=balance-withdrwal;
			cout<<"\nAfter Withdrawal Balance is =  \t"<<balance;
			
		}
		