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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int left = 0, right = n - 1;
        int current_min = 1, current_max = n;
        bool found = false;

        while (left < right)
        {
            if (a[left] == current_min)
            {
                left++;
                current_min++;
            }
            else if (a[left] == current_max)
            {
                left++;
                current_max--;
            }
            else if (a[right] == current_min)
            {
                right--;
                current_min++;
            }
            else if (a[right] == current_max)
            {
                right--;
                current_max--;
            }
            else
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << left + 1 << " " << right + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
