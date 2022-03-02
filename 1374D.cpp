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
        map<ll,ll>mm;
        for(i=0; i<n; i++)
        {
            cin>>a;
            a=a%m;
            if(a!=0)
            {
                v.push_back(m-a);
                mm[m-a]++;
            }
        }
        ll ma=0,last=0;
        for(i=0; i<v.size(); i++)
        {
            if(ma<mm[v[i]])
            {
                ma=mm[v[i]];
            }
        }
        for(i=0; i<v.size(); i++)
        {
            if(ma==mm[v[i]])
            {
                if(last<v[i])
                {
                    last=v[i];
                }
            }
        }
        ma--;
        ll ans=(ma*m)+last+1;
        if(v.size()==0)ans=0;
        cout<<ans<<endl;
        v.clear();
        mm.clear();
    }
}