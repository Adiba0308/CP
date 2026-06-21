#include<bits/stdc++.h>

using namespace std;

void solve(int a, int b, int c)
{


    if (a > b)
    {
        cout << "First\n";
        return;
    }
    else if (b > a)
    {
        cout << "Second\n";
        return;

    }
    else
    {
        if (c % 2)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x, y, z;
        cin >> x >> y >> z;
        solve(x, y, z);
    }

}