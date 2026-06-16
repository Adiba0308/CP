#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n,sum=0;
    cin >> n;
    vector < long long > a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if(n==1)
    {
        cout<<a[0]+b[0]<<endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]>b[i]) swap(a[i], b[i]);
        sum+=max(a[i], b[i]);
    }
    long long maximum = * max_element(a.begin(), a.end());
    cout<<sum+maximum<<endl;

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