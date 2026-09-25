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
    
    Student* Karim=new Student(20,5,4.34);

    

    cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
    cout<<Karim->cls<<" "<<Karim->cls<<" "<<Karim->gpa<<endl;
    

    


      
    return 0;
}