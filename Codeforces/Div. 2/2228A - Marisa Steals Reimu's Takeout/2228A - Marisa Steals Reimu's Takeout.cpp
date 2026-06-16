#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    int one=0,two=0,zero=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1) one++;
        else if(a==2) two++;
        else zero++;
        
    }
    cout<<zero+min(one,two)+((abs(one-two))/3)<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}