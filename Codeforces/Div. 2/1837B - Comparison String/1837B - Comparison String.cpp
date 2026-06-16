#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    int n;
    cin >> n >> s;
    int c = 1, m = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i]) c++;
        else
        {
            m = max(m, c);
            c = 1;
        }
    }
    m = max(m, c);
    cout << m + 1 << endl;
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