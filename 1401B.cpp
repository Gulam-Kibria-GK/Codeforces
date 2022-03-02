#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>a;
    while(a--){
        map<ll,ll>mm,mm1;
        cin>>n>>m>>k;
        mm[0]=n;
        mm[1]=m;
        mm[2]=k;
        cin>>n>>m>>k;
        mm1[0]=n;
        mm1[1]=m;
        mm1[2]=k;
        ll ans=(min(mm[2],mm1[1]));
        //cout<<ans<<endl;
        mm[2]-=ans;
        mm1[1]-=ans;
        ll ans2=(mm1[2])-(mm[2]+mm[0]);
        ll ss=(ans*2);
        if(ans2>0){
            ss=ss-(ans2*2);
        }
        cout<<ss<<endl;
        mm.clear();
        mm1.clear();
    }

}