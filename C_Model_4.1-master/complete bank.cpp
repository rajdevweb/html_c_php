#include<iostream>
using namespace std;
class bank
{
	char name[20],ac_type[20];
	int ac_no,balance,dep,with;
	public:
	bank()
	{
		cout<<"\n\nEnter Name : ";
		cin>>name;
		cout<<"\nEnter Account Number :";
		cin>>ac_no;
		cout<<"\nEnter Account Type :";
		cin>>ac_type;
		cout<<"Enter Balance :";
		cin>>balance;
	}
	
	void deposit()
	{
		cout<<"\nEnter the Amount to Depsite :";
		cin>>dep;
		
		balance = balance + dep;
		
		cout<<"\n\nDEPOSIT SUCESSFUL !! \n\nAvailable balance = "<<balance;
		
	}
	void withdraw()
	{
		cout<<"\nEnter the Ammount the Withdraw :";
		cin>>with;
		
	
		if(with >= balance)
		{
			cout<<"\nAmmount exceeded Balance limit!!";
		}		
		else
		{
			balance = balance-with;
			cout<<"\nWITHDRWAL sUCESSFUL!!\nAvaible Balance : "<<balance;
			
		}
	}


	void inquiry()
	{
		cout<<"\nName = "<<name;
		cout<<"\nBalance ="<<balance;
		
	}
};
main()
{
	
	int n;
	bank b1;
	
	cout<<"Select form Options : \n1.Deposit\n2.Withdraw\n3.View Balance\n\n";
	cin>>n;
	

	switch(n)
	{
		case 1:
		b1.deposit();
		break;
		
		case 2:
		b1.withdraw();
		break;
		
		case 3:
		b1.inquiry();
		break;
		
		default:
		cout<<"\nInvalid Input!!";
	}
}

