#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
    string name;
    int rollNo;

public:
    // Setter
    void setData(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    // Getter
    string getName()
    {
        return name;
    }

    int getRollNo()
    {
        return rollNo;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Student s1;

    s1.setData("Alice", 123);

    s1.display();

    return 0;
}