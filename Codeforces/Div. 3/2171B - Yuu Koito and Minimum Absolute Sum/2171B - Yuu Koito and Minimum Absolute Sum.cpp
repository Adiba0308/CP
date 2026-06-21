#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 
void solve()
{
     int n; 
    cin >> n;
    vector < int > a(n), b;
    
    for (int i =  0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            if (i == 0 and a[n-1] != -1) a[i] = a[n-1];
            else if (i == n - 1 and a[0] != -1) a[i] = a[0];
            else a[i] = 0;
        }
        
        if (i > 0) b.push_back(a[i] - a[i - 1]);
    }
    
    cout << abs(accumulate(all(b), 0)) << endl;
    for (auto x : a) cout << x << " ";
    cout << endl;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}