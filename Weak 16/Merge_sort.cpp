#include <bits/stdc++.h>
using namespace std;

void conquer(int new_arr[], int l, int mid, int r)
{
    int n = mid - l + 1;
    int arr[n];
    int k = l;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new_arr[k];
        k++;
    }
    int m = r - mid;
    int arr2[m];
    int k = mid + 1;
    for (int i = 0; i < m; i++)
    {
        arr2[i] = new_arr[k];
        k++;
    }
    int new_arr[n + m];
    int i = 0, j = 0, curr = l;

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
}

void divide(int a[], int l, int r)
{

    if (l >= r)
        return;

    int mid = l + r / 2;
    divide(a, l, mid);
    divide(a, mid + 1, r);
    conquer(a, l, mid, r);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    divide(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}