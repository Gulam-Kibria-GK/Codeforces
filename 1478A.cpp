#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll>mm;
int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n;
        ll arr[n+3];
        ll ans=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
            mm[arr[i]]++;
            if(ans<mm[arr[i]]){
                ans=mm[arr[i]];
            }
        }
        cout<<ans<<endl;
        mm.clear();
    }
}