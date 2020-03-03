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
    ll i,j,k,l,n,m,a,b,k1,k2,c=0;
    //pair<ll,ll>bb,aa;
    cin>>a>>b>>k1>>k2>>n;
    m=n;
    k=a,l=b;
    if(k1>k2){
        while(n>=k2 && b){
            n-=k2;
            c++;
            b--;
        }
        while(n>=k1 && a){
            n-=k1;
            c++;
            a--;
        }
    }
    else {
        while(n>=k1 && a){
            n-=k1;
            c++;
            a--;
        }
       // cout<<n<<endl;
        while(n>=k2 && b){
            n-=k2;
            c++;
            b--;
        }
    }
    ll ans=(k*k1+l*k2)-m;
    ll kkk=0;
    ans=max(kkk,((k+l)-ans));
    cout<<ans<<" "<<c<<endl;
}
