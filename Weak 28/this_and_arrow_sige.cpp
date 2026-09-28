#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
         this->gpa=gpa;

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