#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int a, b;
    for (int i = 0; i < n - k; i++)
    {
        if (s[i] == '1')
        {

            if (s[i + k] == '1')
            {
                s[i + k] = '0';
            }
            else
            {
                s[i + k] = '1';
            }
            s[i] = '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;


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