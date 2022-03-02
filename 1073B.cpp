#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    vector<ll>vv,v;
    map<ll,ll>mm;
    for(i=0; i<n; i++){cin>>m;
        vv.push_back(m);
        mm[m]=i+1;
    }
    vv.clear();
    for(i=0; i<n; i++){cin>>m;
        vv.push_back(m);
    }
    ll ss=0;
    for(i=0;i<n;i++){
        ll ff=vv[i];
        if(ss<mm[ff]){
            v.push_back(mm[ff]-ss);
            ss=mm[ff];
        }
        else
            v.push_back(0);
    }
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}