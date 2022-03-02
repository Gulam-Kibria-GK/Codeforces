#include <bits/stdc++.h>
using namespace std;

#define _max(aa, bb) (aa = max(aa, bb))
#define _min(aa, bb) (aa = min(aa, bb))

#define LCM(a,b) (a / __gcd(a,b) ) * b
#define gcd(a,b) __gcd(a,b)
#define for0(l,n) for(int l=0;l<n;l++)
#define for1(l,n) for(int l=1;l<=n;l++)


#define db double
#define ll long long
#define sf scanf
#define sfl1(a) sf("%lld",&a)
#define sfl2(a,b) sf("%lld %lld",&a,&b)
#define sfl3(a,b,c) sf("%lld %lld %lld",&a,&b,&c)

#define pf printf
#define pfl1(x) pf("%lld\n",x)

int main()
{
    ll i,j,l,k,n,k1,k2,valu=0;
    sfl3(n,k1,k2);k1+=k2;
    ll int arr[n+2];
    ll int arr2[n+2];
    ll int arr3[n+2];
    for(i=0;i<n;i++)sfl1(arr[i]);
    for(i=0;i<n;i++)sfl1(arr2[i]);
    for(i=0;i<n;i++) arr3[i]=abs(arr[i]-arr2[i]);
    sort(arr3,arr3+n);
    while(k1 && arr3[n-1]) arr3[n-1]--,k1--,sort(arr3,arr3+n);
    valu=(k1%2==1?1:0);
    for(i=0;i<n;i++) valu+=(arr3[i]*arr3[i]);
    pfl1(valu);
    return 0;
}