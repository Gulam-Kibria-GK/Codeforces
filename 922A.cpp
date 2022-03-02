#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,i,j;
    cin>>a>>b;
    if(b==0 && a==0)
    {
            cout<<"NO"<<endl;
    }
    else if(b==0)
    {
        if(a>0)
            cout<<"NO"<<endl;
    }
    else if(b==1)
    {
        if(a==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else if(b%2==0)
    {
        if(a%2==1 && a>=b-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else if(b%2==1)
    {
        if(a%2==0 && a>=b-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}