#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,t,k,l,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>=m){
            cout<<m<<endl;
        }
        else{
            ll a=m/n;
            ll b=m%n;
            ll c=b;
           ll sum=0;
            for(i=0;i<b;i++){
                sum+=((a+1)*(a+1));
            }
            for(i=0;i<n-b;i++){
                sum+=(a*a);
            }
            cout<<sum<<endl;
        }
    }
}
