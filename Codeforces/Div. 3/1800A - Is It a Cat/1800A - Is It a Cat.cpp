#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char &c:s)
    {
        c=tolower(c);
    }
    auto end=unique(s.begin(), s.end());
    s.erase(end, s.end());
    if(s=="meow") cout<<"yes"<<endl;
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