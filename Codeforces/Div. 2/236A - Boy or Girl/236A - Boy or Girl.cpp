#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    set<char>c;
    for(char a:s)
    {
        c.insert(a);
    }
    if(c.size()%2) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}

int main()
{
    solve();
        
}