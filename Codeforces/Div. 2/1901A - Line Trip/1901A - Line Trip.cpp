#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,b=0,c,p;
        cin>>n>>x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int>v1;
        for (int i = 0; i < n; i++)
        {
            p=v[i]-b;
            v1.push_back(p);
            b=v[i];
        }
        c=(x-v[n-1])*2;
        v1.push_back(c);
         cout << *(max_element(v1.begin(), v1.end()))<<"\n";

    }
}
