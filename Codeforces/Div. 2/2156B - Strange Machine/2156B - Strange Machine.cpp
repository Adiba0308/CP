#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector < int > v(q);
    for (int i = 0; i < q; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int j = 0, c = 0;

        if (s.find('B') == string::npos) cout << v[i] << endl;
        else
        {
            while (v[i] > 0)
            {
                if (s[j] == 'A') v[i]--;
                else v[i] /= 2;
                c++;
                j++;
                if (j == n) j = 0;
            }

            cout << c << endl;
        }
    }


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