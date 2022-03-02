#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main()
{   
    
    ll t;
    cin>>t;
 
    while(t--){
        ll n;
        cin>>n;
 
        ll a[n+1];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        if(a[1]==n){
            for(ll i=n;i>1;i--) cout<<a[i]<<" ";
            cout<<n<<endl;
        }
        else if(a[n]==n){
            for(ll i=n-1;i>=1;i--) cout<<a[i]<<" ";
            cout<<n<<endl;
        }
        else cout<<-1<<endl;
    }
 
    return 0;
}