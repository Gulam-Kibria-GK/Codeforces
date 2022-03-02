#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<pair<ll,ll> ,ll>mx,cnt,ans;

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n>>m;

        char arr[n+3][m+3];
        for(i=0;i<n;i++){
            ll f=0;
            for(j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='*'){
                    f++;
                    cnt[{i,j}]=f;
                }
                else{
                    f=0;
                    cnt[{i,j}]=0;
                }

            }
        }
        ll ma=0,tmp=1;
        for(i=0;i<n;i++){
            ma=0;
            tmp=1;
            for(j=m-1;j>=0;j--){
                if(arr[i][j]=='*' && tmp==1){
                    ma=cnt[{i,j}];
                    tmp=0;
                }
               if(arr[i][j]=='.'){
                    ma=0;
                    tmp=1;
               }
               mx[{i,j}]=ma;
            }
        }
        /****
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<arr[i][j]<<" "<<cnt[{i,j}]<<" "<<mx[{i,j}]<<"          ";
            }
            cout<<endl;
        }
        **********/

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(arr[i][j]=='*'){
                    if(i-1>=0){
                        if(j-1>=0 && j+1<m){

                            if(arr[i][j+1]=='.' || arr[i][j-1]=='.' || arr[i-1][j]=='.'){
                                ans[{i,j}]=1;
                            }
                            else{
                            ll dx=0;
                            if(arr[i][j+1]== '*'){
                                dx=1;
                            }
                            ans[{i,j}]=min(ans[{i-1,j}],min(cnt[{i,j-1}],(mx[{i,j+1}]-cnt[{i,j+1}]+dx)))+1;
                            }
                        }
                        else{
                            ans[{i,j}]=1;
                            }
                    }
                    else{
                        ans[{i,j}]=1;
                    }
                }
                else{
                ans[{i,j}]=0;
               }
           }

        }

        ll sum=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                sum+=ans[{i,j}];
            }
        }
        cout<<sum<<endl;
        cnt.clear();
        mx.clear();
        ans.clear();
    }
}