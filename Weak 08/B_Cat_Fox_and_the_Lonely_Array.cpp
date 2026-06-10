#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count = 1;
        int curr_or = a[0];

        for (int i = 1; i < n; i++) {
            int new_or = curr_or | a[i];
            if (new_or != curr_or) {
                count++;
                curr_or = new_or;
            }
        }

        cout << count << "\n";
    }

    return 0;
}


