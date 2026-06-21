#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,y=0;
    cin>>a>>b;
    while(1)
    {
        a*=3;
        b*=2;
        y++;
        if(a>b)
        {
            cout<<y<<endl;
            break;
        }
    }
}

int main()
{
    solve();
        
}