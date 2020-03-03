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
vector<ll>v;
map<ll,ll>mm;
int main()
{
    ll i,j,k,l,n,m,ans,a,b;
    cin>>a;
    while(a--)
    {
         ans=0;
        cin>>k>>l>>m;
        while(l>=1 && m>=2)
        {
            l--;
            m-=2;
            ans+=3;
        }
        while(k>=1 && l>=2)
        {
            k--;
            l-=2;
            ans+=3;
        }

         cout<<ans<<endl;
    }

}
