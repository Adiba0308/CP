#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max=std::max({a+b+c , a*(b+c) , a*b*c , (a+b)*c});
    cout<<max<<endl;
}

int main()
{
    solve();
        
}