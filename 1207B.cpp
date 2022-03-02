#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,x,y;
    cin>>n>>m;
    ll arr[n+4][m+3],brr[n+4][m+3];
    vector< pair<ll,ll> >v;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
            brr[i][j]=0;
        }
    }
    for(x=0; x<n-1; x++)
    {
        for(y=0; y<m-1; y++)
        {
            if(arr[x][y+1]==1 && arr[x+1][y]==1 && arr[x+1][y+1]==1 && arr[x][y]==1)
            {
                brr[x][y+1]=1;
                brr[x+1][y]=1;
                brr[x+1][y+1]=1;
                brr[x][y]=1;
                v.push_back({x,y});
            }
        }
    }
    for(x=0; x<n; x++)
    {
        for(y=0; y<m; y++)
        {
            if(arr[x][y]!=brr[x][y]){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    }
}