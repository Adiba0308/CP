#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, count = 0,max=0;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= max)
        {
            max = v[i];
            count++;
        }
    }

    cout << count << endl;
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