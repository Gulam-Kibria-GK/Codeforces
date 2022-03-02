#include<bits/stdc++.h>
#define ll long long int
const ll M=1e9+7;
using namespace std;

int main(){
    ll n,m,i,j,k;
    while(~scanf("%lld",&n)){
        ll ans=1;
        for (i=1; i<n/2; i++) ans*=i;
        for (i=n/2+1; i<n; i++) ans*=i;
        printf("%lld\n",ans);
    }
    return 0;
}