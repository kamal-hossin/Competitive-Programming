#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        bool all_same = true;
        for (int i = 1; i < N; ++i)
        {
            if (A[i] != A[0])
            {
                all_same = false;
                break;
            }
        }
        if (all_same)
        {
            cout << "YES\n";
            continue;
        }

        bool has_non_zero = false;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] != 0)
            {
                has_non_zero = true;
                break;
            }
        }
        if (!has_non_zero)
        {
            cout << "YES\n";
            continue;
        }

        if (N == 1)
        {
            cout << "YES\n";
            continue;
        }

        int non_zero_count = 0;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] != 0)
            {
                non_zero_count++;
            }
        }
        if (non_zero_count == 1)
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
