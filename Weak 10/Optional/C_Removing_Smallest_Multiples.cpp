#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000 + 5;

int t, n;
char s[MAXN];
int ans;
bool inT[MAXN];
bool removed[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> (s + 1);

        for (int i = 1; i <= n; i++)
        {
            inT[i] = (s[i] == '1');
            removed[i] = false;
        }

        ans = 0;

        for (int k = 1; k <= n; k++)
        {

            for (int multiple = k; multiple <= n; multiple += k)
            {
                if (!inT[multiple] && !removed[multiple])
                {
                    ans += k;
                    removed[multiple] = true;
                    break;
                }
                else if (inT[multiple])
                {

                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
