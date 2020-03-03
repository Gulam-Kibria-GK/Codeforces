/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll i,t,j,k,l,n,m,a,b,s;
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>s;
        ll x=s/n;
        x=min(x,a);
        s-=(x*n);
        if(s<=b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
