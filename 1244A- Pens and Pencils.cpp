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
    ll i,j,k,l,n,m,a,b,c,d;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d>>k;
        ll x,y;
        x=a/c;
        if(a%c!=0)x++;
        y=b/d;
        if(b%d!=0)y++;
        if((x+y)>k){
            cout<<-1<<endl;
        }
        else
        cout<<x<<" "<<k-x<<endl;
    }
}
 
