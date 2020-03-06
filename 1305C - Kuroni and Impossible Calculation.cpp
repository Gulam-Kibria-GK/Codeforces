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
    ll n,m,i,j;
    cin>>n>>m;
    ll a[n+2];
    for(i=0; i<n; i++)
        cin>>a[i];
    ll ans = 1;
    if(n>m)
        cout<<0<<endl;
    else
    {
        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++)
                ans = (ans*abs(a[i]-a[j]))%m;
        cout<<ans%m<<endl;
    }
}
