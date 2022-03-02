#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,k,l,n,m;
    cin>>n;
    vector<ll>v;
    map<ll,ll>mm;
    v.push_back(0);
    for(i=0; i<n; i++)
    {
        cin>>m;
        v.push_back(m);
    }
    v.push_back(0);
    ll c=0;
    for(i=1; i<v.size()-1; i++)
    {
        if(mm[i-1]==0 && mm[i]==0 && mm[i+1]==0)
        {
            if(v[i-1]==1 && v[i]==0 && v[i+1]==1)
            {
                c++;
                mm[i-1]=1;
                mm[i]=1;
                mm[i+1]=1;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}