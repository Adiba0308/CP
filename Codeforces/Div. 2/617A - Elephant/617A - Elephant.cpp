#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n>=1 and n<=5) cout<<1<<endl;
    else
    {
        if(n%5) cout<<(n/5)+1<<endl;
        else cout<<n/5<<endl;
    }
    
}

int main()
{
    solve();
        
}