#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--)
    {
        cin>>n>>m;
        vector<ll>v;
        ll ma=-9999999999;
        for(i=0; i<n; i++)
        {
            cin>>a;
            ma=max(ma,a);
            v.push_back(a);
        }
        ll mm2=-9999999999;
        for(i=0; i<n; i++)
        {
            v[i]=(ma-v[i]);
            mm2=max(mm2,v[i]);
        }
        m--;
        if(m%2==1)
        {
            for(i=0; i<n; i++)
            {
                v[i]=(mm2-v[i]);
            }
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();

    }
}