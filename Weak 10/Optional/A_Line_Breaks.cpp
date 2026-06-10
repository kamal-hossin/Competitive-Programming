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

        vector<string> words(n);
        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }

        int total_Length = 0;
        int x = 0;

        for (int i = 0; i < n; i++)
        {
            int word_Length = words[i].length();
            if (total_Length + word_Length <= m)
            {
                total_Length += word_Length;
                x++;
            }
            else
            {
                break;
            }
        }

        cout << x << endl;
    }

    return 0;
}
