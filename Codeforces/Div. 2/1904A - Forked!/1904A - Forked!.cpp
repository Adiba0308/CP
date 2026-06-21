#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, xk, yk, xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;
    set < pair < int, int >> k = {
        {xk+a,yk+b},
        {xk+a,yk-b},
        {xk-a,yk+b},
        {xk-a,yk-b},
        {xk+b,yk+a},
        {xk+b,yk-a},
        {xk-b,yk+a},
        {xk-b,yk-a}
    };
    set < pair < int, int >> q = {
        {xq+a,yq+b},
        {xq+a,yq-b},
        {xq-a,yq+b},
        {xq-a,yq-b},
        {xq+b,yq+a},
        {xq+b,yq-a},
        {xq-b,yq+a},
        {xq-b,yq-a}
    };
    set < pair < int, int >> intersect;
    set_intersection(k.begin(), k.end(),
                      q.begin(), q.end(),
                      inserter(intersect, intersect.begin()));
                      
    cout<<intersect.size()<<endl;                  
                      

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}