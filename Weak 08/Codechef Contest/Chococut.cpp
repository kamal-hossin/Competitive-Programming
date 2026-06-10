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
        int N, M, K;
        cin >> N >> M >> K;

        int total = N * M;
        int maxAlice = 0;
        if (K == 0)
        {
            cout << total << endl;
            continue;
        }

        for (int i = 1; i < N; i++)
        {
            int part1 = i * M;
            int part2 = (N - i) * M;

            if (part1 >= K || part2 >= K)
            {
                int alicePart;
                if (part1 >= K && part2 >= K)
                {
                    if (part1 > part2)
                    {
                        alicePart = part1;
                    }
                    else
                    {
                        alicePart = part2;
                    }
                }
                else if (part1 >= K)
                {
                    alicePart = part2;
                }
                else
                {
                    alicePart = part1;
                }
                if (alicePart > maxAlice)
                {
                    maxAlice = alicePart;
                }
            }
        }

        for (int i = 1; i < M; i++)
        {
            int part1 = N * i;
            int part2 = N * (M - i);

            if (part1 >= K || part2 >= K)
            {
                int alicePart;
                if (part1 >= K && part2 >= K)
                {
                    if (part1 > part2)
                    {
                        alicePart = part1;
                    }
                    else
                    {
                        alicePart = part2;
                    }
                }
                else if (part1 >= K)
                {
                    alicePart = part2;
                }
                else
                {
                    alicePart = part1;
                }
                if (alicePart > maxAlice)
                {
                    maxAlice = alicePart;
                }
            }
        }

        cout << maxAlice << endl;
    }

    return 0;
}
