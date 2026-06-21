#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,even=0,odd=0,oddindex,evenindex;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]%2)
        {
            odd++;
            oddindex=i;
        }
        else
        {
            even++;
            evenindex=i;
        }
    }
    if(odd==1) cout<<oddindex+1<<endl;
    else cout<<evenindex+1<<endl;
    
}

int main()
{
   solve();  
}