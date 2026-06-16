#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    long long min=n/6;
    long long max=n/4;
    if(n%2==1 || n<4) 
    {
        cout<<"-1"<<endl;
        return;
    }
    if(n%6!=0) min++;
    
    cout<<min<<" "<<max<<endl;

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