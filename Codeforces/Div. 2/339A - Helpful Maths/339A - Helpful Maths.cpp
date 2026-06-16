#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.length();i+=2)
    {
        v.push_back(s[i]-'0');
    }
    sort(v.begin(), v.end());
    cout<<v[0];
    for(int i=1;i<v.size();i++)
    {
        cout<<"+"<<v[i];
    }
    cout<<endl;
    
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