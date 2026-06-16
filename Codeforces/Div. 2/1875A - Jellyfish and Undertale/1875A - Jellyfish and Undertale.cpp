#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int a,n;
    long long b;
    cin>>a>>b>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
     for(int i=0;i<n;i++)
    {
      b+=min(v[i],a-1);
    }
    cout<<b<<endl;
   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}