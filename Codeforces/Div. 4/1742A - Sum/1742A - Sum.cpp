#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int a,b,c;
        vector<int> v;
        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        if(v.at(0)+v.at(1)==v.at(2))
        {
             cout << "YES" << endl;
        }
        else
        {
           cout << "NO" << endl;
        }


    }



}

