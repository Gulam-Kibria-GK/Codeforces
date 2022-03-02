#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll i,j,k,l,n,mi=999999,ma=0,c=0;
    cin>>n;
    map<ll,ll>mm,mm2;
    ll arr[n+3];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        ma=max(ma,++mm2[arr[i]]);
        if(mm[arr[i]]==0){
            c++;
            mm[arr[i]]=1;
        }
    }
    cout<<ma<<" "<<c<<endl;
    return 0;
}