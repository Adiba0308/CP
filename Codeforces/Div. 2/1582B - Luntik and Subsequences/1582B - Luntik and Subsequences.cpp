#include<bits/stdc++.h>

using namespace std;

void solve()
{

    long long n, a, one = 0, zero = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1) one++;
        if (a == 0) zero++;
    }
    cout << (long long) one * (long long) pow(2, zero) << endl;


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