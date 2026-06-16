#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    long long count=0;
    for (char c: s)
    {
        if (c == '4' || c == '7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
        
    
}

int main()
{
    
    solve();

}