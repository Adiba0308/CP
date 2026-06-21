#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> s1;
    for(int i=0;i<n;i++)
    {
        s1.insert(s[i]);
    }
    cout<<s1.size()*2+(s.size()-s1.size())<<endl;
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