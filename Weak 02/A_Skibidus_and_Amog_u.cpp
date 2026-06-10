#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        string word;
        cin >> word;

        string root = "";

        for (int i = 0; i < word.size() - 2; i++) {
            root += word[i];
        }

        root += 'i';

        cout << root << endl;
    }

    return 0;
}

