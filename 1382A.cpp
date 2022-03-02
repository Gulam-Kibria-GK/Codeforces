#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c,d;
    cin>>n;
    while(n--){
        cin>>a>>b;
        ll ans=-1;
        map<ll,ll>mm;
        for(i=0;i<a;i++){
            cin>>d;
            if(mm[d]==0)
                mm[d]++;
        }
        for(i=0;i<b;i++){
            cin>>d;
            if(mm[d]==1)
            {
                ans=d;
            }
        }
        if(ans==-1){
            cout<<"NO"<<endl;
        }
        else{
                cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
        mm.clear();

    }
}