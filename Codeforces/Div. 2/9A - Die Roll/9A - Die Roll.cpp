#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int y,w;
    cin>>y>>w;
    int a=7-max(y, w);
    int g=gcd(a, 6);
    cout<<a/g<<"/"<<6/g<<endl;
    
}

int main()
{
    solve();
        
}