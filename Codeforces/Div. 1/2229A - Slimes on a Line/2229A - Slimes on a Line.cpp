#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector < long long > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool allSame = std::all_of(v.begin(), v.end(), [ & ](int x) {
        return x == v[0];
    });
    if (allSame)
    {
        cout << "0" << endl;
    }
    else
    {
        long long max = * max_element(v.begin(), v.end());
        long long min = * min_element(v.begin(), v.end());
        cout << (max-min+1) / 2 << endl;
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