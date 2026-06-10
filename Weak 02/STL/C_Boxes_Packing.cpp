#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n; 

    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int maxFreq = 0;

    for (auto it : freq) {
        maxFreq = max(maxFreq, it.second);
    }

    cout << maxFreq << endl;

    return 0;
}

