#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> last_digits;
        int freq[10] = {0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x = x % 10;
            if (freq[x] < 3)
            {
                last_digits.push_back(x);
                freq[x]++;
            }
        }

        bool found = false;
        int sz = last_digits.size();
        for (int i = 0; i < sz; i++)
        {
            for (int j = i + 1; j < sz; j++)
            {
                for (int k = j + 1; k < sz; k++)
                {
                    int sum = last_digits[i] + last_digits[j] + last_digits[k];
                    if (sum % 10 == 3)
                    {
                        found = true;
                    }
                }
            }
        }

        if (found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
