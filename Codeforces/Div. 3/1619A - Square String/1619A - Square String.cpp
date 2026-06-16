#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    if(s.length()%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    string a=s.substr(0, s.length()/2);
    string b=s.substr(s.length()/2);
    if(a==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}