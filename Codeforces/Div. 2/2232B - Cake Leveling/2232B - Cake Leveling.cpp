#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout<<v[0]<<" ";
    int sum=v[0],m=v[0];
    for (int i = 1; i < n; i++)
    {
        sum+=v[i];
        m=min(m, sum/(i+1));
        cout<<m<<" ";
    }
    cout<<endl;


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