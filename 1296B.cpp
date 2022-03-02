#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,j,n,m,a;
    cin>>n;
    while(n--){
        cin>>m;
        ll b=m;
        a=m/10;
        while(true){
            m=b+a;
            if(m/10==a){
                break;
            }
            else{
                a=m/10;
            }
        }
        cout<<m<<endl;
    }
}