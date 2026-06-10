#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<pair<int, int>> movies(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        movies[i] = {b, a};
    }

    sort(movies.begin(), movies.end());

    int count = 0;
    int last_end_time = 0;

    for (auto [end, start] : movies)
    {
        if (start >= last_end_time)
        {

            count++;
            last_end_time = end;
        }
    }

    cout << count << endl;

    return 0;
}
