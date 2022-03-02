#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
ll i,j,k,n,m,a,b,c,d;
    cin>>n;
    while(n--){
        cin>>a;
        vector<ll>v;
        ll idx;
        for(i=0;i<a;i++){
            cin>>b;
            v.push_back(b);
        }
        ll ans;
        for(i=0;i<a;i++){
            if(i%2==0){
                ans=1;
            }
            else{
                ans=2;
            }
            if(v[i]!=1)break;
        }
        if(ans==1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
        v.clear();
    }
}