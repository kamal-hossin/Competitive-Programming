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
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }

        long long total = 0;
        int left = 0;
        while (left < N)
        {
            int low = min(A[left], B[left]);
            int high = max(A[left], B[left]);
            int right = left;
            while (right + 1 < N)
            {
                int new_low = min(A[right + 1], B[right + 1]);
                int new_high = max(A[right + 1], B[right + 1]);
                int next_low = max(low + 1, new_low);
                int next_high = new_high;
                if (next_low > next_high)
                {
                    break;
                }
                low = next_low;
                high = next_high;
                right++;
            }
            total += (long long)(right - left + 1) * (right - left + 2) / 2;
            left = right + 1;
        }

        cout << total << "\n";
    }
}
