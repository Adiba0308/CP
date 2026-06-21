#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (k%2== 1 || n % 2 == 0)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}