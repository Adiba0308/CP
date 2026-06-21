#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0,f=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {

            if(s[i]=='.')
            {
                b++;
                a++;
                if(a>=3)
                {
                    f=1;
                }
            }
            else
            {
                a=0;
            }
        }
        if(f)
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<b<<"\n";
        }

    }
}
