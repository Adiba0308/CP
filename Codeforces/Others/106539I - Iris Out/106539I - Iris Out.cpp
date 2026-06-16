#include<bits/stdc++.h>

using namespace std;

#define int long long




void solve() {
    string a,b;
    cin>>a>>b;
    if(a[0]==b[1] && a[1]==b[0]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

}