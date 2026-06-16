#include<bits/stdc++.h>

using namespace std;

#define int long long

bool is_palindrome(int a) {

    string s = to_string(a);
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    if (n < 10 || is_palindrome(n))
    {
        cout << n << " " << 0 << endl;
        return;
    }
    if(n%12==0)
    {
        cout << 0 << " " << n << endl;
        return;
    }


    for (int i = (n/12)*12; i >=12; i -= 12)
    {
        if (is_palindrome(n - i))
        {
            cout << n-i << " " << i << endl;
            return;
        }
    }


    cout <<-1<< endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

}