#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define LCM(a,b) (a / __gcd(a,b) ) * b
#define gcd(a,b) __gcd(a,b)

int main()
{
    ll n,m,i,j,k,l,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        if(n%2==0 || m%2==0)printf("2\n");
        else printf("12\n");
    }
}