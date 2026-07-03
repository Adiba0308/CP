#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    string s;
    cin>>s;
    int one=0,zero=0;
 
    for(auto a:s){
    if(a=='0') zero++;
    else one++;
    }
    int x=min(one,zero);
    if(x&1)cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
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