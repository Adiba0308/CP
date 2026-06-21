#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,a=0,f=0;
        cin>>m>>n;
        string x;
        string s;
        cin>>x>>s;

        while(a<=6)
        {
            if(x.find(s)!=string::npos)
            {
                cout<<a<<"\n";
                f=1;
                break;
            }
            x=x+x;
            a++;
        }
        if(!f)
        {
             cout<<-1<<"\n";
        }
    }
}
