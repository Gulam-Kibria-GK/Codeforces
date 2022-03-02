#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll t,n,m,i,j,mn=99999999,mx=0,c=0,cnt=0,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll x[n+2],y[n+2],z[n+2];
        for(i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }
        for(i=0; i<n; i++)
        {
            c = 0;
            for(j=0; j<n; j++)
            {
                m = abs(x[i]-x[j])+abs(y[i]-y[j]);
                if(m<=k)
                    ++c;
            }
            if(c==n)
                break;
        }
        if(c==n)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
}