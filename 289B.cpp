#include <bits/stdc++.h>
using namespace std;

#define for0(l,n) for(int l=0;l<n;l++)
#define ll long long
#define sf scanf
#define sfl1(a) sf("%lld",&a)
#define sfl3(a,b,c) sf("%lld %lld %lld",&a,&b,&c)

int main()
{
    ll i,j=0,k,l,l2,n,d,m,a,b,ma=9999999;
    sfl3(n,m,d);
    n=n*m;
    ll arr[n+5];
    for0(i,n)sfl1(arr[i]);
    sort(arr,arr+n);
    l=arr[n/2];
    for0(i,n){
    if((abs(l-arr[i]))%d){cout<<-1<<endl;return 0;}}
    for(i=0; i<n; i++)j+=((abs(l-arr[i]))/d);
    cout<<j<<endl;
    return 0;
}