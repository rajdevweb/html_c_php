#include <iostream>
#include <string.h>
using namespace std;
class Lecture
{
    char name[20], subname[20], course[20], lec_details[50];
    int lec;

public:
    Lecture()
    {
        cout << "Name of the lecture : ";
        cin >> name;
        cout << "Name of the subject : ";
        cin >> subname;
        cout << "Name of course : ";
        cin >> course;
        cout << "Number of Lectures : ";
        cin >> lec;
    }
    void lecture_detail()
    {
        cout << "\nTo add a lecture details : ";
        cin >> lec_details;
    }
    void display()
    {
        cout << "\n\nName of the Lecturer : " << name;
        cout << "\nlecture Datails : " << lec_details;
    }
};

main()
{
    Lecture obj;

    obj.lecture_detail();
    obj.display();
};