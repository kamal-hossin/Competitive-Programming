#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        string result;

        for (char ch : s)
        {
            if (ch == 'b')
            {
                for (int i = result.size() - 1; i >= 0; i--)
                {
                    if (islower(result[i]))
                    {
                        result.erase(i, 1);
                        break;
                    }
                }
            }
            else if (ch == 'B')
            {
                for (int i = result.size() - 1; i >= 0; i--)
                {
                    if (isupper(result[i]))
                    {
                        result.erase(i, 1);
                        break;
                    }
                }
            }
            else
            {

                result += ch;
            }
        }

        cout << result << endl;
    }

    return 0;
}
