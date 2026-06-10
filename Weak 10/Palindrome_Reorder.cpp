#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'A']++;
    }

    int oddCount = 0;
    int oddCharIndex = -1;
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] % 2 != 0)
        {
            oddCount++;
            oddCharIndex = i;
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string firstHalf = "", middle = "";

    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] % 2 != 0)
        {
            middle += string(freq[i], 'A' + i);
        }
        else
        {
            firstHalf += string(freq[i] / 2, 'A' + i);
        }
    }

    string result = firstHalf + middle;
    reverse(firstHalf.begin(), firstHalf.end());
    result += firstHalf;

    cout << result << '\n';

    return 0;
}
