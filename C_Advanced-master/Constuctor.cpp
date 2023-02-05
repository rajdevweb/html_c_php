#include<iostream>
using namespace std;
class student
{
	int roll_no = 1 ;
	char name[20] = "RAJ";
	public:
		student()
		{
			cout<<"\nRoll no :" <<roll_no;
			cout<<"\nName = "<<name;
		}
};
main()
{
	student s;
}