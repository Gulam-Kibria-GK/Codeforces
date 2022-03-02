#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v[1000000];

int main()
{
    ll i,j,n,m,a,b;
    cin>>n;
    for(i=1; i<n; i++){
        cin>>m;
        v[m].push_back(i+1);
    }
    for(i=1; i<=n; i++){
        if(v[i].size()==0) continue;
        ll c=0;
        for(j=0; j<v[i].size(); j++){
            if(v[v[i][j]].size()==0)c++;
        }
        if(c<3){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}