#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<ll,ll>mm;
vector<ll>v;

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n;
        m=sqrt(n);
        v.push_back(0);
        for(i=1;i<m+1;i++){
            a=n/i;
            if(mm[i]==0)
                v.push_back(i);
                mm[i]=1;
            if(mm[a]==0)
                v.push_back(a);
                mm[a]=1;


        }
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        ll hh=v.size();
        for(i=0;i<hh;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
        mm.clear();
    }
}