#include <iostream>
using namespace std;
class X
{
    float a,b,c,d,ans;
    public:
    void input()
    {
        cout<<"Enter Value A : ";
        cin<<a;
        cout<<"Enter Value B : ";
        cin<<b;
        cout<<"Enter Value C : ";
        cin<<c;
        cout<<"Enter Value d : ";
        cin<<d;
    }
    void display()
    {
        ans = a+b+c+d;
        cout<<"\nAddition : "<<ans;

        ans = a-b-c-d;
        cout<<"\nsubtracation : "<<ans;

        ans = a*b*c*d;
        cout<<"\nmultiplication : "<<ans;

        ans = a/b/c/d;
        cout<<"\nDivision : "<<ans;

    }
};
main()
{
    X obj;
    obj.input();
    obj.display();
}
