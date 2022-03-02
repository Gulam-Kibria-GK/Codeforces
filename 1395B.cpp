#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll k,n,m,ans;

ll vis[1000][1000]= {};
ll dx[4]= {0,0,1,-1};
ll dy[4]= {1,-1,0,0};

bool check(ll x,ll y)
{
    if((x>0 && x<=n) && (y>0 && y<=m))
        return true;
    return false;
}

void dfs(ll a,ll b)
{
    if(!check(a,b)){
        return;
    }
    if(vis[a][b]==0)
    {
        vis[a][b]=1;
        cout<<a<<" "<<b<<endl;
        ans--;
    }
    else{
        return;
    }
    if(ans==0)
        return;
    dfs(a,b-1);
    dfs(a-1,b);
    dfs(a+1,b);
    dfs(a,b+1);

}
int main()
{
    ll i,j,a,b;
    cin>>n>>m>>a>>b;
    ans=n*m;
    memset(vis,0,sizeof(vis));
    dfs(a,b);

}