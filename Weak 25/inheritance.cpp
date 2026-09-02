#include <bits/stdc++.h>
using namespace std;
class Phone
{
public:
    string brand;
    string model;
    int price;

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};
class Smartphone : public Phone
{
public:
    string operatingSystem;

    void display()
    {
        Phone::display(); // Call base class display
        cout << "Operating System: " << operatingSystem << endl;
    }
};

class IPhone : public Smartphone
{
public:
    string faceID;

    void display()
    {
        Smartphone::display(); // Call base class display
        cout << "Face ID: " << faceID << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    IPhone iPhone1;
    iPhone1.brand = "Apple";
    iPhone1.model = "iPhone 12";
    iPhone1.price = 999;
    iPhone1.operatingSystem = "iOS";
    iPhone1.faceID = "TrueDepth Camera";

    iPhone1.display();

    return 0;
}