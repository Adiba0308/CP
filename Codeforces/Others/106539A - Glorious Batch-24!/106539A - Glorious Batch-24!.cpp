#include<bits/stdc++.h>

using namespace std;

#define int long long




void solve() {
    int n, impostor = 0;
    cin >> n;

    for (int i = 1; i <= n % 24; i++)
    {
        if (((i * i) - 1) % 24 == 0) impostor++;
    }
    
    cout << ((n / 24) * 8) + impostor << endl;
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