#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,k,n,m;
    cin>>k;
    while(k--){
        cin>>n>>m;
        if(n%m==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
