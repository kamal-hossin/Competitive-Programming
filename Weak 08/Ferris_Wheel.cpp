#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int left = 0;
    int right = n - 1;
    int gondolas = 0;

    while (left <= right)
    {
        if (p[left] + p[right] <= x)
        {

            left++;
            right--;
        }
        else
        {
            right--;
        }
        gondolas++;
    }

    cout << gondolas << endl;

    return 0;
}
