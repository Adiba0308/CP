#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,bill=0;
    cin>>n;
    while(n>=100)
    {
        n-=100;
        bill++;
    }
    while(n>=20)
    {
        n-=20;
        bill++;
    }
    while(n>=10)
    {
        n-=10;
        bill++;
    }
    while(n>=5)
    {
        n-=5;
        bill++;
    }
    while(n>=1)
    {
        n-=1;
        bill++;
    }
    cout<<bill<<endl;
}

int main()
{
    solve();
        
}