#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X;
    cin >> X;

    for (int six = 100; six >= 0; six--)
    {
        int run_from_six = six * 6;
        int remaining_runs = X - run_from_six;
        int remaining_balls = 100 - six;
        if (remaining_runs >= 0 && remaining_runs <= remaining_balls * 4)
        {
            cout << six << endl;
            break;
        }
    }


    return 0;
}

