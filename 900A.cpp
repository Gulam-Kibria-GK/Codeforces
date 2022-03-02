#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,c=0,d=0;;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a<0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if(c<=1 || d<=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}