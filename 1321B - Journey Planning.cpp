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
map<ll,ll>mm;
int main(){
    ll i,j,k,n,m=0,a,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        mm[a-i]+=a;
        m=max(m, mm[a-i]);
    }
    cout<<m<<endl;
}
