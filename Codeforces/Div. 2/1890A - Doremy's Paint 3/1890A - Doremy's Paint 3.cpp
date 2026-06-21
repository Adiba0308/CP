#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> s(v.begin(), v.end());
        if(s.size()>2)
        {
            cout<<"NO\n";
        }
        else if(s.size()==1)
        {
            cout<<"YES\n";
        }
        else
        {
            a=count(v.begin(),v.end(),*s.begin());
            b=count(v.begin(),v.end(),*s.rbegin());
            if(a-b==0||a-b==1||a-b==-1)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
