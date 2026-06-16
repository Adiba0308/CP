#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,c=0;
    cin>>n;
    string s= to_string(n);
    if(n%25==0)
    {
        cout<<"0"<<endl;
        return;
    }
    vector<int>skip(4);
    vector<string> cases={"00","25","75","50"};
    for(int k=0;k<4;k++)
    {
        int i;
        for(i=s.length()-1;i>=0;i--)
        {
            if(s[i]==cases[k][1]) break;
        }
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(s[j]==cases[k][0]) break;
        }
        skip[k]=s.length()-j-2;
        
    }
     cout << min({skip[0],skip[1],skip[2],skip[3]}) << endl;
    
    
    
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