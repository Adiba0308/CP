#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,b=0,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0) b++;
        else 
        {
            if(m<b) m=b;
            b=0;
        }
    }
    if(m<b) m=b;
    cout<<m<<endl;
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