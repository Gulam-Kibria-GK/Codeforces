#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll n,i,j,k,c=0,cnt=0,x,y,z,t,m;
    string s,s2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+2],b[n+2];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c = 0;
        for(i=1; i<n; i++)
        {
            if(a[i]>=a[i-1])
                c = 1;
        }
        if(c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
}