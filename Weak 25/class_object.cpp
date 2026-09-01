#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Student s1;
    s1.name = "Alice";
    s1.rollNo = 123;
    s1.display();

    return 0;
}

