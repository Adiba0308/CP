#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector < int > v(n), a,c(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
 
    for (int i = 0; i < n; i++) {
        if (v[i] != -1) {
            c[v[i]] = 1;
        }
    }

    
    for (int m = n; m >= 1; m--) {
        if (!c[m]) {
            a.push_back(m);
        }
    }
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == -1)
        {
            v[i] = a[j];
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;


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