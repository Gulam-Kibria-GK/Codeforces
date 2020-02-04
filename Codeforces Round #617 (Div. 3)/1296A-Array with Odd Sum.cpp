#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,j,n,m,a;
    cin>>j;
    while(j--){
        cin>>n;
        ll f=0;
        for(i=0;i<n;i++){
            cin>>a;
            if(a%2)f++;
        }
        if(f==0 || (f==n && f%2==0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
