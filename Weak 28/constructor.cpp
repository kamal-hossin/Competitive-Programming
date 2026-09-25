#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r,int c,double g)
    {
        int roll=r;
        int cls=c;
        double gpa=g;

    }

};

int main()
{
    Student Rahim(50,5,5.00);
    Student Karim(2,5,5.00);

    

    cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
    cout<<Karim.roll<<" "<<Karim.cls<<" "<<Karim.gpa<<endl;
    

    


      
    return 0;
}