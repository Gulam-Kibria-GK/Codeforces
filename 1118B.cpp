#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll v[1000000];
ll v2[1000000];

int main()
{
    ll i,k,l,n,m,a=1,b=2,od,ev,c=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>v[i];
        v2[i]=v[i];
    }
    for(i=n;i>=1;i--){
            v[i-2]=v[i-2]+v[i];
        }
    v[0]=v[2];
    for(i=1;i<=n;i++){
        a=1;b=2;
        if(i%2==0)a=2,b=1;
        ev=v[a]-v[i];
        od=v[b]-v[i+1];
        ev+=v[i+1];
        od+=(v[i]-v2[i]);
        if(od==ev)c++;
        od=0;ev=0;
    }
    cout<<c<<endl;
}