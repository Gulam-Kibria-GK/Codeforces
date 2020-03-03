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
    ll i,j,k=0,nn,m,p=0,n=0;
    vector<ll>v;
    cin>>nn;
    for(i=0;i<nn;i++){
        cin>>m;
        v.push_back(m);
        if(m>=0)p++;
        else n++;
    }
    //if(p!=n)k=abs(n-p);
    ll ans=0,f=0;
    for(i=0;i<nn;i++){
        if(v[i]>1){
            ans+=v[i]-1;
        }
        else if(v[i]==0){
            ans++;
            f=1;
        }
        else if(v[i]<-1){
            ans+=abs(v[i])-1;
        }
    }
    if(n%2 && f==0){
        ans+=2;
    }
    cout<<ans<<endl;
}
