#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        count++;
        if(s[i]=='L')
        {
            cout<<count<<endl;
            return;
        }
    }
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