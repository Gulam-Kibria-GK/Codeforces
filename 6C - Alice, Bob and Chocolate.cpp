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
    ll i=0,j=0,k=0,n,m,a,b;
    vector<ll>v,v1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        v1.push_back(a);
    }
    reverse(v1.begin(),v1.end());
    i=1,j=1;
    if(n>2)
    {
        i=0,j=0;
        while(true)
        {
            ll value=min(v[i],v1[j]);
            v[i]-=value;
            v1[j]-=value;
            if(v[i]==0)
            {
                i++;
            }
            if(j+i==n)
                break;
            if(v1[j]==0)
            {
                j++;
            }
            if(j+i==n)
                break;
        }
    }
    else if(n==1){
        i=1;j=0;
    }
    cout<<i<<" "<<j<<endl;
}
