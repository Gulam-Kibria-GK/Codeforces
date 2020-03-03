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
    ll i,j,k,l,n,m,a,b,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        a+=1;
        cout<<a-min(b,c)<<endl;
    }
    return 0;
}
