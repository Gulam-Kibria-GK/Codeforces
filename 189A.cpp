#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,n,m,a,b,c,ans,ma=0;
    cin>>n>>a>>b>>c;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            ans=n-i*a-j*b;
            if(ans>=0 && ans%c==0){
                m=ans/c;
                ma=max(ma,i+j+m);
            }
        }
    }
    cout<<ma<<endl;
    return 0;
}