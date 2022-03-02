#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>v[200];

void solve(){
    ll i,j,l,k;
    for(i=2; i<101; i++){
        for(j=0; j<=100; j++){
            ll ans=powl(i,j);
            if(ans<=1e16+1){
                v[i].push_back(ans);
            }
            else break;
        }
        sort(v[i].rbegin(),v[i].rend());
    }
}

int main()
{
    ll i,j,l,k,n,m,a,b;
    solve();
    cin>>k;
    vector<ll>vv;
    map<ll,ll>mm;
    while(k--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++){
            cin>>a;
            if(a!=0)
                vv.push_back(a);
        }
        sort(vv.rbegin(),vv.rend());
        ll falg=0;
        n=vv.size();
        for(i=0;i<n-1;i++){
            if(vv[i]-vv[i+1]==0){
                falg=1;
            }
        }
        if(falg){
            cout<<"NO"<<endl;
        }
        else if(n==0){
            cout<<"YES"<<endl;
        }
        else{
            ll kk=v[m].size();
            for(i=0;i<kk;i++){
                mm[v[m][i]]=1;
            }
            for(i=0;i<n;i++){
                for(j=0;j<kk;j++){
                    if(mm[v[m][j]]==1){
                        if(vv[i]>=v[m][j]){
                            vv[i]-=v[m][j];
                            mm[v[m][j]]=0;
                        }
                        if(vv[i]==0)break;
                    }
                }
            }
            ll aa=0;
            for(i=0;i<n;i++){
                if(vv[i]==0)aa++;
            }
            if(aa==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        mm.clear();
        vv.clear();
    }
}