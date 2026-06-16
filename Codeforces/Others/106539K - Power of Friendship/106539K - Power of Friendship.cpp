#include<bits/stdc++.h>

using namespace std;

#define int long long




void solve() {
    float a,p,q;
    cin>>p>>q;
    a=p/q;
    cout<< fixed << setprecision(6) <<(a*a*a)/2<<endl;
    
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