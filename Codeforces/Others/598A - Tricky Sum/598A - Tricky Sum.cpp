#include<bits/stdc++.h>

using namespace std;

#define int long long




void solve()
{
    int n,i=1;
    cin>>n;
    int sum=n*(n+1)/2;
    while(i<=n)
    {
        sum-=i*2;
        i=i*2;
    }
        
    cout<<sum<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }

}