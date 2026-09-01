#include<bits/stdc++.h>
using namespace std;

class Phone{
public:
    string brand;
    string model;
    int price;

    Phone(string b, string m, int p) {
        brand = b;
        model = m;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
}
;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Phone p1("Apple", "iPhone 13", 999);
    p1.display();

    return 0;
}