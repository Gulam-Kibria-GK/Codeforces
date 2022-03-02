#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll dx[]= {1,-1,0,0};
ll dy[]= {0,0,1,-1};
ll vis[1000][1000];
char ch[1005][1005];
vector<ll>v[1000];
ll k,n,l,m;

void bfs(ll s,ll d)
{
    ll i,j,k,siz,vn,cnt=1;
    pair<ll,ll> u;
    queue<pair<ll,ll> >q;
    q.push({s,d});
    vis[s][d]=1;
    while(!q.empty()){
         u=q.front();
        q.pop();
        for(i=0; i<4; i++){
            ll x=u.first+dx[i];
            ll y=u.second+dy[i];
            if(x>=0 && x<n && y>=0 && y<m && vis[x][y]==0 && ch[x][y]!='#'){
                //cout<<cnt<< " "<<l<<endl;
                if(cnt==l)return;
                q.push({x,y});
                vis[x][y]=1;
                cnt++;
            }
        }
    }
}

int main(){
    ll i,j,a,b,c=0,x=0,y=0;
    cin>>n>>m>>k;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>ch[i][j];
            if(ch[i][j]=='.'){
                x=i;y=j;c++;
            }
        }
    }
    l=c-k;
    if(l!=0)bfs(x,y);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ch[i][j]=='.'){
                if(vis[i][j]==0){
                    cout<<'X';
                }
                else cout<<ch[i][j];
            }
            else cout<<ch[i][j];
        }
        cout<<endl;
    }
    return 0;
}