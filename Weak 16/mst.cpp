#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int a,b,c;
    
    Edge(int a, int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;

    }
};
bool cmp( Edge l, Edge r)
{
    return l.c < r.c;
}

int main()
{
    int n,e;
    cin >> n >> e;
    vector<Edge>Edge_list;
    while(e--)
    {
        int a ,b,c;
        cin >> a >> b >> c;
        Edge_list.push_back(Edge(a,b,c));
    }
    sort(Edge_list.begin(), Edge_list.end(),cpm);
    for(auto ed : Edge_list)
    {
        cout << ed.a << " " << ed.b << " "<< ed.c << endl;
    }

    return 0;
}