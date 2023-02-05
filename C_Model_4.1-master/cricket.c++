#include<iostream>
using namespace std;
class cricketer
{
    public
    int a,b,c;
    char d[20];

    void name()
    {
        cout<<"Enter Betsman Name :";
        cin>>d;
        cout<<"Enter Run :";
        cin>>a;
        cout>>"Enter Total Ining : ";
        cin>>b;
        cout>>"Enter Hight Score of betsman : ";
        cin>>c;

    }

};
class betsman : public cricketer 
{
    int average;
    public : 
    void calcuaverage()
    {
        average = a/b;
    }
    void display()
    {
        cout<<"\n\nBatsman name:"<<d;
        cout<<"\nTotal runs :"<<a;
        cout<<"\nBest performanace his carrier  :"<<c;
        cout<<"\n Carrier Avarage :"<<average;




        
    }
    
};
main()
{
    batsman b1;
    b1.name();
    b1.calcuaverage();
    b1.display();
}