#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> freq;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int first_mex = 0;
        while (freq[first_mex] > 0) {
            freq[first_mex]--;
            first_mex++;
        }

        int second_mex = first_mex;
        while (freq[second_mex] > 0) {
            freq[second_mex]--;
            second_mex++;
        }

        cout << second_mex << '\n';
    }
    return 0;
}
