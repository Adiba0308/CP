#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int b[n][n];
    map < int, int > count;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
            count[b[i][j]]++;
        }
    }
    for (auto c: count)
    {
        if (c.second > ((n*n)-n))
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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