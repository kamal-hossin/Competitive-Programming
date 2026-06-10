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
        string S;
        cin >> S;

        int zeroBlocks = 0, oneBlocks = 0;

        for (int i = 0; i < N;)
        {
            char current = S[i];
            int j = i;
            while (j < N && S[j] == current)
                j++;

            if (current == '0')
                zeroBlocks++;
            else
                oneBlocks++;

            i = j;
        }

        cout << min(zeroBlocks, oneBlocks) << '\n';
    }

    return 0;
}
