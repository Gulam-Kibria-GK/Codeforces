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
    while(k--)
    {
        cin>>n;
        vector<ll>v1,v2,v3;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        ll f1=0;
        for(i=0; i<n; i++)
        {
            if(f1<=v1[i])
            {
                v2.push_back(v1[i]);
                f1++;
            }
            else
            {
                break;
            }
        }
        ll f2=0;
        for(i=n-1; i>=0; i--)
        {
            if(f2<=v1[i])
            {
                v3.push_back(v1[i]);
                f2++;
            }
            else
            {
                break;
            }
        }
        if(n==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            ll siz=v2.size()+v3.size();
            //cout<<siz<<"   ";
            if(siz>=n+1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        v1.clear();
        v2.clear();
        v3.clear();
    }
}
