#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, c = 0;
    cin >> n;
    vector < int > v(n+1);
    int b = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0) break;
        if (v[i] - i <= b && v[i] - i <= 0)
        {
            c++;
            v[v[i]] = 0;
        }
    }

    cout << c << endl;
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