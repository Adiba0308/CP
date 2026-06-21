#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,sc;
    cin>>s1>>s2>>s3;
    sc=s1+s2;
    sort(sc.begin(), sc.end());
    sort(s3.begin(), s3.end());
    if(sc==s3)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}