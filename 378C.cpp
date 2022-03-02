#include<bits/stdc++.h>
using namespace std;

char ch[505][505];
int vis[505][505];
int n,m,k;
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
void dfs(int x,int y)
{
    if(x<0 || y<0 || x>=n || y>=m || ch[x][y]!='.' || vis[x][y]==1)
        return;
    //vis[x][y] = 1;

        vis[x][y] = 1;

        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x,y+1);
        dfs(x,y-1);
        if(k>0)
        {
            --k;
            ch[x][y]='X';
        }

}

int main()
{
    int i,j,u,s,d,s1,s2,t=0;

    cin>>n>>m>>k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='.' && t==0)
            {
                s1 = i;
                s2 = j;
                t= 1;
            }
        }
    }
    dfs(s1,s2);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }
    return 0;
}