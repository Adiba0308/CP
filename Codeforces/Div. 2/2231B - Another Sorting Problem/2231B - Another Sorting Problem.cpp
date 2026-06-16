#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n, k = 0;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        k = max(k, v[i - 1] - v[i]);
    }
    
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1])
            v[i] += k;
    }
    if(is_sorted(v.begin(), v.end())) cout<<"YES"<<endl;
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