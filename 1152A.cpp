#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,k,n,m,a=0,b=0,x=0,y=0,ans;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>k;
        if(k&1)b++;
        else a++;
    }for(i=0;i<m;i++){
        cin>>k;
        if(k&1)y++;
        else x++;
    }
    ans=(min(x,b)+min(y,a));
    cout<<ans<<endl;
}