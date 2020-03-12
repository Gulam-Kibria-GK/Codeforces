#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    vector<ll >v,v2;
    map<ll,ll>mm,mm2;
    cin>>n;
    while(n--)
    {
        cin>>m;
        ll f2=0;
        for(i=0; i<m; i++)
        {
            cin>>k;
            v.push_back(k);
            mm[k]=i;
        }
        ll f=0;
        for(i=0;i<m;i++){
            if(mm[v[i]]>=i+2){
                f=1;break;
            }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        v.clear();
        mm.clear();
    }
}
