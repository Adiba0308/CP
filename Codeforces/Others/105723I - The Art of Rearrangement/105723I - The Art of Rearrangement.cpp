#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{

    int n;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(),greater < int > ());
    for (int i = 0; i < n; i++) 
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


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