#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a[n];
    ll mini=1000000000000;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<mini)
            mini=a[i];
    }
    ll mini2=100000000000,f=0,c=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==mini && f==0){
            f=1;
            continue;
        }
        if(f==1)
            c++;
        if(a[i]==mini)
        {
            if(c<mini2)
                mini2=c;
            c=0;
        }
    }
    cout<<mini2<<endl;
}