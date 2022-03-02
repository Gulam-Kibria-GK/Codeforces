#include<bits/stdc++.h>
using namespace std;

#define ll long long
int ch[105][105];
ll vis [105][105];
ll dis[105][105];
ll dx[]= {0,0,1,-1};
ll dy[]= {1,-1,0,0};
ll n,m,a,b,c,f;
bool check(ll x,ll y)
{
    if(x>0 && y>0 && x<9 && y<9 && !vis[x][y])return true;
    else return false;
}

void bfs()
{
    ll i,j,k,vn,siz;
    pair<ll,ll> u;
    queue<pair<ll,ll> >q;
    q.push({n,m});
    dis[n][m]=0;
    vis[n][m]=1;
    while(q.size())
    {
        u=q.front();
        q.pop();
        for(i=0; i<4; i++)
        {
            ll x=u.first+dx[i];
            ll y=u.second+dy[i];
            if(check(x,y))
            {
                q.push({x,y});
                vis[x][y]=1;
                dis[x][y]=dis[u.first][u.second]+1;
                if(2==ch[x][y])
                {
                    cout<<dis[x][y]<<endl;
                    f=1;
                    return ;
                }

            }
        }
    }
}

int main()
{
    ll i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>a>>b;
        c=0,f=0;
        for(i=1; i<=8; i++)
        {
            for(j=1; j<=8; j++)
            {
                ch[i][j]=1;
            }
        }
        ch[n][m]=2;
        ch[a][b]=2;
        bfs();
        if(f==0)cout<<0<<endl;
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));

    }
    return 0;
}