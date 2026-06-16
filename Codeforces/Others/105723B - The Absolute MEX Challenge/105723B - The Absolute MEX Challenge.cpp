#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{

    int n;
    cin >> n;
    vector<int>v;

    if (n < 4) {
        if (n == 3) cout << 1 << " " << 3 << " " << 2 << endl;
        else if (n == 2) cout << 1 << " " << 2 << endl;
        else cout << 1 << endl;
    }
    else
    {
        v.push_back((n+1)/2);
        for(int i=n-1;i>0;i--)
        {
            if(i==(n+1)/2) continue;
            v.push_back(i);
        }
        for (int i=0;i<n-1;i++) cout <<v[i]<< " ";
        cout << n << endl;

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