#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    ll a=abs(x-y);
    ll b=a*t1;
    ll c=abs(x-z)*t2+(2*t3)+a*t2+(t3);
    if(b>=c)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}