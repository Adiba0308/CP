#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int p;
    cin>>p;
    int a=p;
    int n=3*p;
    vector<int>v;
    for(int i=1; i<=n;i++)
    {
        v.push_back(i);
    }
    for(int i=0; i<p;i++)
    {
        cout<<v[i]<<" "<<v[i+a]<<" "<<v[i+a+1]<<" ";
        a++;
    }
    cout<<endl;

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