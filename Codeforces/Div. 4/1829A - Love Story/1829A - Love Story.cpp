#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
    int d=0;
    string s;
    cin>>s;
    string c="codeforces";
    for(int i=0;i<10;i++)
    {
        if(s[i]!=c[i])
        {
            d++;
        }
    }
    cout<<d<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}