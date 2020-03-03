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
    ll i,j,k=9999999,n;
    cin>>n;
    for(i=1;i<=n;i++){
        ll a,b;
        if(n%i==0){
            a=n/i;
            b=(i+a)*2;
            k=min(k,b);
        }
    }
    cout<<k<<endl;
}
