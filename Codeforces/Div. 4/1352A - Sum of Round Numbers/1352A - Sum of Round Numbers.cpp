#include<iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,r,b=1,m=0;
        vector<int> sum;
        std::cin>>n;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            b=r*(pow(10,m));
            m++;
            if(b!=0)
            {
                sum.push_back(b);
            }

        }
        cout << sum.size() << endl;
        for (const int& s : sum)
        {
            cout << s << "  ";
        }

    }




}
