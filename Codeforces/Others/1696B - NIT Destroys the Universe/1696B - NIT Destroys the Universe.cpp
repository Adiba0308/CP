#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, c = 0,a=-1;
    cin>>n;
    vector < long long > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (all_of(v.begin(), v.end(), [](int x) { return x == 0; })) {
        cout <<"0"<<endl;
        return;
    }
    int start = 0;
    int end = n - 1;
    while (start < n && v[start] == 0) {
        start++;
    }

    while (end >= start && v[end] == 0) {
        end--;
    }
    v = vector<long long>(v.begin() + start, v.begin() + end + 1);

    for (int i = 0; i < v.size() ; i++)
    {
        if (v[i] == 0 )
        {
            if(i!=a+1)
            {
                c++;
                a=i;
            }
            
        }
    }
    if(c>0) cout<<"2"<<endl;
    else cout<<c+1<<endl;

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