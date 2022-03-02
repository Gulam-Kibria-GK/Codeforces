#include<bits/stdc++.h>
using namespace std;


#define ll long long
vector<ll>v;
map<ll,ll>mm;
int main()
{
    ll i,j,k,kk=0,l,n,m,a,b;
    cin>>n>>a;
    for(i=0; i<n; i++)
    {
        cin>>m;
        if(mm[m]==0)
        {
            v.push_back(m);
            mm[m]=1;
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<a){
        for(i=v.size();i<=a;i++){
            v.push_back(0);
        }
    }
    for(i=0; i<a; i++)
    {
        k=v[i]-kk;
        kk+=k;
        if(k<0)
        {
            cout<<0<<endl;
        }
        else
            cout<<k<<endl;
    }
}