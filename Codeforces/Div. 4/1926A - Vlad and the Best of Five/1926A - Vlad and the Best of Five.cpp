#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int a=count(s.begin(), s.end(),'A');
    int b=count(s.begin(), s.end(),'B');
    if(a>b) cout<<"A"<<endl;
    else cout<<"B"<<endl;
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