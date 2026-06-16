#include<bits/stdc++.h>

using namespace std;

#define int long long




void solve() {
    vector<double>t1(3),t2(3);
    cin>>t1[0]>>t1[1]>>t1[2]>>t2[0]>>t2[1]>>t2[2];
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    
    if(t1[0]/t2[0]==t1[1]/t2[1] && t1[1]/t2[1]==t1[2]/t2[2]) cout<<"YES"<<endl;
    else cout <<"NO"<< endl;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

}