#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;

    Student(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
    }
    void hello()
    {
        cout << "Hello";
    }
    
};

int main()
{
    Student sakib("Sakib Ahemed", 38);
    cout << sakib.name<<" " << sakib.roll << endl;
    sakib.hello();

      
    return 0;
}