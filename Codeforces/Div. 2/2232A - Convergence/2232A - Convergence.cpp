#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,c=0;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n/2; ++i)
    {
        if(v[i]!=v[n-i-1]) c++;
        else break;
        
    }
    cout<<c<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}