#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,x,y;
    cin>>n>>x;
    ll a[500];
    memset(a, 0, sizeof a);
    for(ll i=0;i<n;i++){
        cin>>y;
        a[y]=1;
    }
    ll i=1;
    while(1){
        if(x==0)break;
        if(a[i]==0 && x){
            --x;

            a[i]=1;

        }
        if(x==0)break;
        i++;
    }
    for(i=1;i<500;i++){
        if(a[i]==0){
            if(i!=1)--i;
            break;
        }
    }
    cout<<i<<endl;
    }

}