#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2)
        {
            cout<<"I hate";
            continue;
        }
        else
        {
            cout<<" that I love";
        }
        if(i==n) break;
        cout<<" that ";
    }
    cout<<" it";
}

int main()
{
    solve();
}
