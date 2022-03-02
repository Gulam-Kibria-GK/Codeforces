#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--){
        cin>>m;
        ll arr[m+2];
        for(i=0;i<m;i++){
            cin>>arr[i];
        }
        ll all=0,idx=0;
        for(i=0;i<m;i++){
            if((i+idx+1)<(arr[i])){
                idx+=(arr[i]-(i+idx+1));
                //cout<<idx<<endl;
            }
        }
        cout<<idx<<endl;
    }
}