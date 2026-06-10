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
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> left, right;
        left.push_back(a);
        right.push_back(b);

        for (int num = 1; num <= n; num++)
        {
            if (num != a && num != b)
            {
                if (num > a && num < b)
                {
                    if (left.size() < n / 2)
                    {
                        left.push_back(num);
                    }
                    else
                    {
                        right.push_back(num);
                    }
                }
                else if (num > a)
                {
                    left.push_back(num);
                }
                else if (num < b)
                {
                    right.push_back(num);
                }
            }
        }

        if (left.size() == n / 2 && right.size() == n / 2)
        {
            for (int i = 0; i < left.size(); i++)
                cout << left[i] << " ";
            for (int i = 0; i < right.size(); i++)
                cout << right[i] << " ";
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
