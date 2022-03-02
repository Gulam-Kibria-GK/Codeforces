#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    ll t,n,m,i,j,k,c=0,cnt=0,x,y,mn;
    cin>>t;
    while(t--)
    {
        c = 0;
        cin>>n>>k;
        ll a[n+2];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1; i<n; i++)
        {
                x = floor((k-a[i])/(a[0]*1.0)) ;
                c+=x;
        }
        cout<<c<<endl;
    }
 
    return 0;
}