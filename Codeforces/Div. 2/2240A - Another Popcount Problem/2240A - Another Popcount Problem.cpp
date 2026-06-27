#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int p = 0;
    for (int i = 1; i <= n; i = i * 2)
    {
        if ((k * i) <= n)
        {
            p += k ;
            n = n - (k * i);
        }
        else
        {
            p += (n / i);
            break;
        }
    }
    cout << p << endl;
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