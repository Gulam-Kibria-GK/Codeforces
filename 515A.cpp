#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,s,n,value,value2=1;
    cin>>a>>b>>s;
    if(a<0)
    {
        a=-a;
    }
    if(b<0)
    {
        b=-b;
    }
    value=a+b;
    if(value<=s)
    {
        value2=s-value;
    }
    if(value==s)
    {
        cout<<"YES\n";
    }
    else if(value2%2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}