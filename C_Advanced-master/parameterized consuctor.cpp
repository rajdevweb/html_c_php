#include<iostream> std;
using namespace std;
class student
{
	int roll_no,i;
	char name[20];
	public :
	student(int a, char s[20])
	{
		roll_no = a;
		for(i=0;i<20;i++)
		{
			name[i] = s[i];
			
		}
	}
	void display()
	{
		cout<<"\nRoll_no :"<<roll_no;
		cout<<"\nName = "<<name;
	}
};
main()
{
	student s(12, "Krishna");
	s.display();
}