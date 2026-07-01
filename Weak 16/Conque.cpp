#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int new_arr[n + m];
    int i = 0, j = 0, curr = 0;

    while (i < n && j < m)
    {
        if (arr[i] < arr2[j])
        {
            new_arr[curr] = arr[i];
            i++;
            curr++;
        }
        else
        {
            new_arr[curr] = arr2[j];
            j++;
            curr++;
        }
    }
    while (i < n)
    {
        new_arr[curr] = arr[i];
        i++;
        curr++;
    }
    while (j < m)
    {
        new_arr[curr] = arr2[j];
        j++;
        curr++;
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << new_arr[i] << " " << endl;
    }

    return 0;
}