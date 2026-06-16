#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i!=0)
        {
            cout<<i-1<<endl;
            return;
        }
            
    }
    cout<<n<<endl;
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