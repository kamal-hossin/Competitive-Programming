#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;

    Student(int id, char name[101], char section, int total_marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
    Student highest_number_khujbo(Student another_student)
    {
        if (this->total_marks >= another_student.total_marks)
        {
            return *this; // present student
        }
        else
        {
            return another_student; // another student
        }
        if (this->id > another_student.id)
        {
            return another_student; // another student
        }
        else
        {
            return *this; // present student
        }
    }
};

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int id1, id2, id3;
        int total_marks_1, total_marks_2, total_marks_3;
        char section1, section2, section3;
        char name1[101], name2[101], name3[101];

        cin >> id1 >> name1 >> section1 >> total_marks_1;
        cin >> id2 >> name2 >> section2 >> total_marks_2;
        cin >> id3 >> name3 >> section3 >> total_marks_3;

        Student student1(id1, name1, section1, total_marks_1);
        Student student2(id2, name2, section2, total_marks_2);
        Student student3(id3, name3, section3, total_marks_3);

        //  Student Sorboccho_number_Hobe = student1.highest_number_khujbo(student2).highest_number_khujbo(student3);

        Student high_number_Half = student1.highest_number_khujbo(student2);
        Student high_number_full = high_number_Half.highest_number_khujbo(student3);

        cout << high_number_full.id << " " << high_number_full.name << " " << high_number_full.section << " " << high_number_full.total_marks << endl;
    }

    return 0;
}