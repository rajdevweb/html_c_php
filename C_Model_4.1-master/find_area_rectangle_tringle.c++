#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,s,r,area;
int ch;
cout<<"\nPlease choose one of these";
cout<<"\n**************************";
cout<<"\n1.Area Of Circle";
cout<<"\n2.Area Of Rectangle";
cout<<"\n3.Area Of Triangle \n";
cout<<"\nEnter Your Choice :";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"\nEnter Radius Of The Circle: ";
cin>>r;
area=3.14*r*r;
break;
}
case 2:
{
cout<<"\nEnter Length And Breadth Of Rectangle:";
cin>>a>>b;
area=a*b;
break;
}
case 3:
{
cout<<"\nEnter Three Sides Of The Triangle:";
cin>>a>>b>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
break;
}
default: cout<<"\n Invalid Choice Try Again...!!!";
break;
}
cout<<"Area = "<<area<<endl;
return 0;
}