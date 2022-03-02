#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
 
int main()
{
    ll t;
    cin>>t;
 
    while(t--)
    {
        ll n,m,k,ss;
        cin>>n>>k;
 
 
        if(k%(n-1)==0){
            m=k/(n-1);
            ss=m*n;
            cout<<(ss-1)<<endl;
        }
        else{
            m=k/(n-1);
            ll a=k%(n-1);
            ss=(m*n)+a;
            cout<<ss<<endl;
        }
    }
}