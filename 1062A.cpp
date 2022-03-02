#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll i,j,k,n,m,f=1,ma=0;;
    cin>>n;
    ll a[n+5];
    for(i=1; i<=n; i++)cin>>a[i];
    a[0]=0;
    a[n+1]=1001;
    for(i=1; i<=n+1; i++){
        if(a[i]==a[i-1]+1)f++;
        else ma=max(ma,f-2),f=1;
    }
    ma=max(ma,f-2);
    cout<<ma<<endl;
    return 0;
}