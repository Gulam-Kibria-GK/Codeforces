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
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n>>m>>a>>b;
        ll ans=m-n;
        ll d=a+b;
        if(ans%d!=0 || ans==0){
            cout<<-1<<endl;
        }
        else{
            cout<<ans/d<<endl;
        }
    }
}
