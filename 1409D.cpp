#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,r;
    cin>>k;
    while(k--){
        string st;
        ll ans=0,cunt=1;
        cin>>st>>a;
        n=st.size();
        ll sum=0;
        for(i=0;i<n;i++){
            sum+=(st[i]-'0');
        }
        if(sum<=a){
            cout<<ans<<endl;
            continue;
        }
        for(i=n-1;i>=0;i--){
            ll vlu=st[i]-'0';
            sum-=vlu;
            sum+=1;
            st[i-1]++;
            ll dif=10-vlu;
            ans+=cunt*dif;
            cunt*=10;
            if(sum<=a)break;
        }
        cout<<ans<<endl;
    }
}