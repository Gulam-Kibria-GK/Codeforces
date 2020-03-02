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
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }
    else if(a<b){
        if((b-a)%2==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else{
        if((a-b)%2==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    }
}
