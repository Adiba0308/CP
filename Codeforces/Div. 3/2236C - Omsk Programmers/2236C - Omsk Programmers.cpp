#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int a, b, x;
    cin >> a >> b >> x;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (abs(a - b) == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (x == 1)
    {
        cout << abs(a - b) << endl;
        return;
    }
    int c = 0;
    int ans = abs(a - b);

    while (a != b)
    {
        ans = min(ans, c + abs(a - b));


        if (a > b)
        {
            a = a / x;
            c++;
        }
        else
        {
            b = b / x;
            c++;
        }

    }
    cout << min(ans, c + abs(a - b)) << endl;


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