#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES\n";
        cout<<n<<endl;
        for (int i = 0; n > 0; i++)
        {
            cout << 1 << " ";
            n--;
        }
        cout << "\n";
        return;
    }
    else
    {
        if (k == 1)
        {
            cout << "NO\n";
            return;
        }
        if (k == 2)
        {
            if (n % 2)
            {
                cout << "NO\n";
                return;
            }
            else
            {
                cout << "YES\n";
                cout<<(n/2)<<endl;
                for (int i = 0; n > 0; i++)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << "\n";
                return;

            }
        }
        else if (k > 2)
        {
            if (n % 2)
            {
                cout << "YES\n";
                cout<<(n/2)<<endl;
                for (int i = 0; n > 3; i++)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << 3 << endl;
                return;
            }
            else
            {
                cout << "YES\n";
                cout<<(n/2)<<endl;
                for (int i = 0; n > 0; i++)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << "\n";
            }
        }



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