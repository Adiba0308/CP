#include<bits/stdc++.h>
using namespace std;

#define int long long

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
 
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

vector < int > get_divisors(int n) {
    vector < int > res;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            if (i * i != n) res.push_back(n / i);
        }
    }
    std::sort(res.begin(), res.end());
    return res;
}


void solve()
{
    int n,c=0;
    cin>>n;
    
    while(n)
    {
        vector<int> divi=get_divisors(n);
        vector<int> primeD;
        for(auto d:divi)
        {
            if(is_prime(d)) primeD.push_back(d);
            if (primeD.size() > 2) break;
        }
        if(primeD.size() == 2) c++;
        primeD.clear();
        n--;
    }
    cout << c << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
        
}