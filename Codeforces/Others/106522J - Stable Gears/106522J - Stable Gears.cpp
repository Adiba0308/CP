#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    unsigned __int128 k;
    int input;
    cin >> input;
    
    k = input;

    unsigned __int128 stable_gear_count = ((k * k)) / (unsigned __int128) 4;
    cout << (int) stable_gear_count << endl;


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