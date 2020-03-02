#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c,d;
    cin>>k;
    while(k--){
        cin>>n;
        ll sum=0,xr=0;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
            xr^=a;
            sum+=a;
        }
        if(n>2){
            if(sum==xr*2){
                cout<<0<<endl<<endl;
                v.clear();
                continue;
            }
        }
        if(n==1){
            cout<<2<<endl;
           cout<<v[0]<<" "<<2*v[0]<<endl;
        }
       else if(n==2){
            cout<<2<<endl;
            cout<<xr<<" "<<sum+xr<<endl;
       }
       else{
            cout<<2<<endl;
            cout<<xr<<" "<<sum+xr<<endl;
       }
    }

}
