#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a,m;
    ll i,j,k,n;
    cin>>n;
    while(n--)
    {
        a=LLONG_MIN;
        ll b=0;
        cin>>k;
        for(i=0; i<k; i++)
        {
            cin>>m;
            a=max(m,a);
            b+=m;
        }
        double ans=a+((b-a)/double(k-1));
        printf("%.9lf\n",ans);
    }
}