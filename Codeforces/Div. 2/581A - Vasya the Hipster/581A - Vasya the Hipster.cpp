#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int max=std::max(a,b);
    int min=std::min(a,b);
    cout<<min<<" "<<(max-min)/2;
}

int main()
{
    solve();
}