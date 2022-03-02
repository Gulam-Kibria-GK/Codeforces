#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>k;
    while(k--){
        ll a,b,c,f=0;
        cin>>a>>b>>c;
        ll ma=(max(max(a,b),c));
        ll mi=(min(min(a,b),c));
        if(ma==a)f++;
        if(ma==b)f++;
        if(ma==c)f++;
        if(f>=2){
            cout<<"YES"<<endl;
            if(ma==a && ma==b){
                cout<<ma<<" "<<mi<<" "<<mi<<endl;
            }
            else if(ma==a&& ma==c){
                cout<<mi<<" "<<ma<<" "<<mi<<endl;
            }
            else{
                cout<<mi<<" "<<mi<<" "<<ma<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}