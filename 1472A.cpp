#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--){
       ll w,h,n,m=1;
       cin>>w>>h>>n;
       while(w%2==0){
        m*=2;
        w/=2;
       }
       while(h%2==0){
        m*=2;
        h/=2;
       }
       if(m>=n){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
    }
}