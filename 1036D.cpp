#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sf scanf
#define sfl1(a) sf("%lld",&a)
#define for0(l,n) for(int l=0;l<n;l++)

int main(){
    ll i,j,k,l,d,d2,n,m,sum=0,sum2=0;
    sfl1(n);
    ll v[n+5];
    for0(i,n){
        sfl1(v[i]);
        sum+=v[i];
    }
    sfl1(m);
    ll v1[m+4];
    for0(i,m){
        sfl1(v1[i]);
        sum2+=v1[i];
    }
    if(sum!=sum2){cout<<-1<<endl;return 0;}
    i=j=l=0;d=d2=1;
    while(true){
        if(i>=n || j>=m)break;
        if(v[i]==v1[j]){l++;i+=d;j+=d2,d=d2=1;continue;}
        if(v[i]<v1[j]){v[i]+=v[i+d];d++;}
        if(v[i]>v1[j]){v1[j]+=v1[j+d2];d2++;}
    }
    cout<<l<<endl;
    return 0;
}