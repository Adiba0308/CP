#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int x, k;
    cin >> x >> k;

    int cost = (ceil((double)x / 3))*2;
    if (x == 2) cost = 4;
    cout << min(cost, k) << endl;

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