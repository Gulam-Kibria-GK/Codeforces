#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ans(ll ar2[],ll f){
    if(ar2[0]>ar2[4] && ar2[1]>ar2[5] && f==1)cout<<"YES"<<endl;
    else if(ar2[0]<ar2[4] && ar2[1]>ar2[5] && f==2)cout<<"YES"<<endl;
    else if(ar2[0]<ar2[4] && ar2[1]<ar2[5]&& f==3)cout<<"YES"<<endl;
    else if(ar2[0]>ar2[4] && ar2[1]<ar2[5]&& f==4)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}

int main()
{
    ll i,j,k,l,n,m,a,b,f;
    cin>>n;
    ll ar2[8];
    for(i=0;i<6;i++)cin>>ar2[i];
    if(ar2[0]>ar2[2] && ar2[1]>ar2[3])f=1;
    else if(ar2[0]<ar2[2] && ar2[1]>ar2[3])f=2;
    else if(ar2[0]<ar2[2] && ar2[1]<ar2[3])f=3;
    else if(ar2[0]>ar2[2] && ar2[1]<ar2[3])f=4;
    ans(ar2,f);
    return 0;
}