#include<bits/stdc++.h>

using namespace std;

#define int long long

int MOD=998244353;
int power(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve()
{
    int n,m,r,c;
    cin >> n >> m>>r>>c;
    int sub=(((n)-r+1)*(m-c+1));
    cout << power(2,((n*m)-sub)) << endl;
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