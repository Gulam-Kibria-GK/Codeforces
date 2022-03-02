#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,n,m,sum=0,mn,id;
        cin>>n;
        ll a[n+5],b[n+5];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll jj=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==b[i])jj++;

        }
        if(jj==n){
            cout<<"YES"<<endl;
            continue;
        }
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
                mn=b[i]-a[i];
        }
        if(mn<=0)
            cout<<"NO"<<endl;
        else
        {
            ll f=0;
            for(i=0; i<n; i++)
            {
                if(a[i]!=b[i])
                {
                    a[i]+=mn;
                    f=1;
                }
                else if(f)
                {
                    break;
                }
            }

            ll kk=0;
            for(i=0; i<n; i++)
            {
                if(a[i]!=b[i])
                {
                    cout<<"NO"<<endl;
                    kk=1;
                    break;
                }
            }
            if(kk==0)
            {
                cout<<"YES"<<endl;
            }
        }
    }
}