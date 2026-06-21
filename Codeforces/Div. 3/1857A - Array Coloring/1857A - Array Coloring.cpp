#include<bits/stdc++.h>

using namespace std;

void solve(int n, int * a)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2)
        {
            c++;
        }
    }
    if (c % 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(n, a);
    }

}