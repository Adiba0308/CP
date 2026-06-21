#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b;
    cin >> n>>a>>b;
    if(n==a && a==b)
    {
        cout<<"YES"<<endl;
        return;
    }
    if((a+b)>(n-2))  cout << "NO" << endl;
    else cout << "YES" << endl;
    
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