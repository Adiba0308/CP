#include<bits/stdc++.h>

using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<char> v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   for(int i=0;i<n;i++)
   {
       if(v.empty())
       {
           cout<<0<<endl;
           return;
       }
       if(v.front() == v.back())
       {
           cout<<v.size()<<endl;
           return;
       }
       v.erase(v.begin() + 0);
       v.pop_back();
   }
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