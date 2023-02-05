#include<iostream>
using namespace std;
class shape
{
    float ans,a,b;
    public:
    void area (float r)
    {
        ans = 3.14 * r * r;
        cout<<"\n\nArea of Circle : "<<ans;
    }

    void area (float a, float b )
        {
            ans = 0.5 * a * b;
            cout<<"\n\nArea of Tringle : "<<ans;
        }
    void area()
    {
        cout<<"\n\nEnter Lenght : ";
        cin>>a;
        cout<<"\Enter Height : ";
        cin>>b;
        ans = a * b;
        cout<<"\n\nArea of Square/Rectangle : "<<ans;   
    }
};
 main()
 {
 	int n;
 	float r, b;
 	shape obj;
 	
 	cout<<"\nSelect the shape : \n1.Circle \n2. Tringle \n3. Rectangle/Square\n";
 	cin>>n;
 	
 	switch(n)
 	{
 		case 1:
	 		cout<<"\n\nEnter Radius :";
	 		cin>>r;
	 		obj.area(r);
	 		break;
 		
 		case 2:
	 		cout<<"\n\nEnter Base :";
	 		cin>>b;
	 		cout<<"Enter Height : ";
	 		cin>>r;
	 		obj.area(b,r);
	 		break;
 		
 		case 3:
	 		obj.area();
	 		break;
 		
 		default:
 			cout<<"\nINVALID CHOICE!! ";
	 }
 }