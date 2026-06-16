#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector < int > b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(b.rbegin(), b.rend());
    
    if (n == 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (b[i]==b[i+1] ||b[i] % b[i + 1] != b[i + 2])
        {
            cout << -1 << endl;
            return;
        }
    }
    
    
    cout <<b[0]<<" "<<b[1]<< endl;

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