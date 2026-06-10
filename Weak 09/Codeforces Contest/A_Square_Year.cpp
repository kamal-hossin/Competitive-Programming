#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int num = 0;
        for (char c : s) {
            num = num * 10 + (c - '0');
        }

        int root = sqrt(num);

        if (root * root != num) {
            cout << -1 << endl;
            continue;
        }


        bool found = false;
        for (int a = 0; a <= root; ++a) {
            int b = root - a;
            if ((a + b) * (a + b) == num) {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }


    return 0;
}

