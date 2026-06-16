#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
                ans = abs(i - 2) + abs(j - 2);
        }
    }
    cout << ans << endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }

}