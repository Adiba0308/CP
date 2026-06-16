#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    if (n % 3)
    {
        cout << -1 << endl;
        return;
    }
    
    int c = 0;
    while (n%3==0)
    {
        if (n % 6 == 0) n /= 6;
        else n *= 2;
        c++;
    }
    if(n==1) cout<<c<<endl;
    else cout<<-1<<endl;

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