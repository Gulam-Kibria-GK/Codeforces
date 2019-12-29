#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a;
    cin>>k;
    while(k--){
        cin>>n>>m>>a;
        ll ma1=0,ma2=0,d;
        for(i=0;i<m;i++){
            cin>>d;
            ma1=max(ma1,d);
        }
        for(i=0;i<a;i++){
            cin>>d;
            ma2=max(ma2,d);
        }
        if(ma1>ma2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
