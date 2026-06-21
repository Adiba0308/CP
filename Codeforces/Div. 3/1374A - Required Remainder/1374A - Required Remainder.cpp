#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int x,y,n;
   cin>>x>>y>>n;
   if(n%x==y)
   {
       cout<<n<<endl;
       return;
   }
   int a=(n/x)*x;
   if(n-a<y){
       cout<<a-(x-y)<<endl;
   }
   else if(n-a>y){
        cout<<a+y<<endl;
   }
    
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