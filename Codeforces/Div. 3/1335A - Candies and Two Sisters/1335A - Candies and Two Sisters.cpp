#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    if(n<=2)
    {
        cout<<"0"<<endl;
        return;
    }
    if(n%2) 
    {
        cout<<n/2<<endl;
        return;
    }
    else
    {
        cout<<(n/2)-1<<endl;
        return;
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
