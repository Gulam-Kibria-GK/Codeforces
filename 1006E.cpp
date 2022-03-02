#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
vector<ll>v[200020],sz(200010),pos(200010),ser(200010);
ll hh=1;
void dfs(ll k)
{
    sz[k]=1;
    ser[hh]=k;
    pos[k]=hh++;
    for(ll i=0;i<v[k].size();i++){
        dfs(v[k][i]);
        sz[k]+=sz[v[k][i]];
    }
}

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m;
    for(i=2; i<=n; i++)
    {
        cin>>a;
        v[a].pb(i);
    }
    dfs(1);
    //for( i=1;i<=n;i++) cout<<i<<" : "<<sz[i]<<endl;
    for(i=0; i<m; i++)
    {
        cin>>k>>l;
        if(sz[k]<l){
            cout<<-1<<endl;
        }
        else{
            cout<<ser[l+pos[k]-1]<<endl;
        }
    }
}