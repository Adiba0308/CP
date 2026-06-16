#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, count = 0;
    cin >> n;
    vector < long long > a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool allNegative = std::all_of(a.begin(), a.end(), [](int x) {
        return x < 0;
    });
    if (allNegative)
    {
        cout << "0" << endl;
        cout << endl;
        return;
    }
    vector < long long > c;
    for (int i = n - 1; i >= 0; i--)
    {

        long long current;
        if (count % 2 == 1) {
            current = -a[i]; 
        } else {
            current = a[i]; 
        }
        if (current > 0)
        {
            c.push_back(i + 1);
            count++;
        }
    }


    cout << count << endl;
    for (auto b: c)
    {
        cout << b << " ";
    }
    cout << endl;




}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}