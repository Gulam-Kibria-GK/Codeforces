#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll>mm;

int main()
{
    ll i,j,k=0,nn,m,n;
    vector<ll>v,v2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>nn;
        v.push_back(nn);
        mm[nn]=1;
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>nn;
        v2.push_back(nn);
        mm[nn]=1;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
           // cout<<mm[v[i]+v2[j]]<<" "<<i<<" "<<j<<endl;
            if(mm[v[i]+v2[j]]==0)
            {
               cout<<v[i]<<" "<<v2[j]<<endl;
                return 0;
            }
        }
    }
}