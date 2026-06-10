#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int final_Step_X = A - C; 
    int final_Step_Y = B - D; 

    cout << final_Step_X << " " << final_Step_Y << endl;


    return 0;
}

