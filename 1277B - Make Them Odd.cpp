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

ll check(ll a){
    if(a%2==0)return 1;
    return 0;
}
int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>a;
    while(a--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>b;
            if(mm[b]==0 && b%2==0){
                v.push_back(b);
                mm[b]=1;
            }
        }
        ll siz=v.size(),c=0;
        sort(v.rbegin(),v.rend());
        for(i=0;i<siz;i++){
            while(check(v[i])){
                //cout<<v[i]<<endl;
                v[i]=v[i]/2;
                c++;
                if(mm[v[i]]==1)break;
            }
        }
        cout<<c<<endl;
        v.clear();
        mm.clear();
    }
}
