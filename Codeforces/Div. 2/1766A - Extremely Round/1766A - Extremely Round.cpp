#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count=floor(log10(n));
    n=n/(pow(10,count));
    int x=(count*9)+n;
    cout << x << endl;
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