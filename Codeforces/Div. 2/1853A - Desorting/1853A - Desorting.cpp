#include<bits/stdc++.h>

using namespace std;

void solve()
{

    int n,d;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(!is_sorted(a.begin(), a.end()))
    {
        cout<<0<<"\n";
        return;
    }
    d = a[1]-a[0];
    for (int i = 1; i < n - 1; i++)
    {
        if ((a[i+1] - a[i]) < d)
        {
            d = (a[i+1] - a[i]);
        }
    }
    
    cout << (d/2)+1<<"\n";

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