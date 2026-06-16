#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]==s[i]) c++;
    }
    if(c<=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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