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
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> req(n);
        for (int i = 0; i < n; i++)
        {
            cin >> req[i].first >> req[i].second;
        }

        long long points = 0;
        int current_side = 0;
        int current_time = 0;

        for (int i = 0; i < n; i++)
        {
            int target_time = req[i].first;
            int target_side = req[i].second;
            int available_time = target_time - current_time;

            if (current_side == target_side)
            {
                points += (available_time / 2) * 2;
            }
            else
            {
                if (available_time >= 1)
                {
                    int max_odd = available_time;
                    if (max_odd % 2 == 0)
                    {
                        max_odd--;
                    }
                    points += max_odd;
                }
                else
                {
                    points = -1;
                    break;
                }
            }

            current_side = target_side;
            current_time = target_time;
        }

        if (points != -1 && current_time < m)
        {
            int remaining_time = m - current_time;
            points += remaining_time;
        }

        cout << points << "\n";
    }

    return 0;
}
