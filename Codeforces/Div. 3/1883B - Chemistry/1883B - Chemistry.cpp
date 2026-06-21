#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k,odd=0;
    cin >> n >> k;
    string s;
    cin >> s;
    map < char, int > freq;
    for (char c: s) {
        freq[c]++;
    }
    for (auto const& f: freq) {
        if(f.second%2)
        {
            odd++;
        }
    }
    if(k>=odd-1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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