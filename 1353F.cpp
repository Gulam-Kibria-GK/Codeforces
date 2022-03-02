#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll arr[n+2][m+2];
        ll dp[n+2][m+2];

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        ll p,q,ans=-1;
        for(p=0;p<n;p++){
            for(q=0;q<m;q++){
                memset(dp,-1,sizeof(dp));
                for(i=0;i<n;i++){
                    for(j=0;j<m;j++){
                        if(i>p && j<q)continue;
                        if(i<p && j>q)continue;

                        if(arr[i][j]>=arr[p][q]-p+i-q+j){
                            dp[i][j]=arr[i][j]-arr[p][q]+p-i+q-j;
                        }
                    }
                }

                for(i=0;i<n;i++){
                    for(j=0;j<m;j++){
                        if(i==0 && j==0)continue;
                        if(dp[i][j]==-1)continue;

                        ll x=-1,y=-1;
                        if(i>0)
                            x=dp[i-1][j];
                        if(j>0)
                            y=dp[i][j-1];
                        if(x==-1 && y==-1){
                            dp[i][j]=-1;
                        }
                        else if(x==-1){
                            dp[i][j]+=y;
                        }
                        else if(y==-1)
                        {
                            dp[i][j]+=x;
                        }
                        else{
                            dp[i][j]+=min(x,y);
                        }
                    }
                }

                if(dp[n-1][m-1]!=-1){
                    if(ans==-1){
                        ans=dp[n-1][m-1];
                    }
                    else{
                        ans=min(ans,dp[n-1][m-1]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}