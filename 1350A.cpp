#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t, a,b;
 
 
    cin>>t;
 
    while(t--){
        cin>>a>>b;
        ll ans;
        if(a%2==0){
            ans=a+(b*2);
        }
        else{
            for(ll i=3; i<=a; i++){
                if(a%i==0){
                    ans=a+i;
                    break;
                }
            }
            ans=ans+((b-1)*2);
        }
        cout<<ans<<endl;
    }
}