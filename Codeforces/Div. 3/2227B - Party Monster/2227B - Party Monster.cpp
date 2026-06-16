#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    long long n;
    cin>>n>>s;
    if(n%2==1)  
    {
        cout<<"NO"<<endl;
        return;
    }
    long long c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==')') c1++;
        else c2++;
    }
    if(c1==c2) cout<<"YES"<<endl;
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