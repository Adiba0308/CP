#include<bits/stdc++.h>

using namespace std;

#define int long long




void solve()
{
    string n;
    int c=0;
    cin >> n;
    while (n.length()>1)
    {
        c++;
        int sum=0;
        for (int i = 0; i < n.length(); i++)
        {
            int num = n[i] - '0';
            sum += num;
            
        }
        n = to_string(sum);
    }
    cout<<c<<endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

}