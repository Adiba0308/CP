#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    for (char &c : s) {
        c =toupper((unsigned char)c);
    }
    if(s=="YES") cout<<"YES"<<endl;
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