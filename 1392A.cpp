#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,a,b;
    cin>>k;
    while(k--){
        cin>>a;
        vector<ll>v;
        for(i=0;i<a;i++){
            cin>>b;
            v.push_back(b);
        }
        ll xx=v[0],f=0;
        for(i=1;i<a;i++){
            if(xx==v[i])f++;
        }
        if(f==a-1){
            cout<<a<<endl;
        }
        else{
            cout<<1<<endl;
        }
        v.clear();
    }
}