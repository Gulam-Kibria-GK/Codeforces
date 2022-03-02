#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>dp(1000005);
void factorial(){
    dp[0]=dp[1]=1;
    for(int i=2;i<=1000000;i++){
        dp[i]=((dp[i-1]*i)%1000003);
        //cout<<dp[i]<<" ";
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if((n-(2*(k-1)))%2==0 && (n-(2*(k-1)))>0){
            cout<<"YES"<<endl;
            for(ll i=1;i<k;i++){
                cout<<"2 ";
            }
            cout<<n-(2*(k-1))<<endl;
            continue;
        }
        if((n-(k-1))%2==1 && (n-(k-1))>0){
            cout<<"YES"<<endl;
            for(ll i=1;i<k;i++){
                cout<<"1 ";
            }
            cout<<n-(k-1)<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}