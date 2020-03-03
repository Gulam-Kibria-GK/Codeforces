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
    ll i,j,k,l,n,m,ab;
    cin>>n>>m;
    vector<ll>v;
    map<ll,ll>mm;
    vector<ll>v1;
    for(i=0;i<n;i++){
        cin>>ab;
        if(mm[ab]==0)
            v.push_back(ab);
        mm[ab]++;
    }
    for(i=0;i<v.size();i++){
        if(mm[v[i]]%2==0){
            v1.push_back(mm[v[i]]);
        }
    }
    for(i=0;i<v.size();i++){
        if(mm[v[i]]%2==1){
            v1.push_back(mm[v[i]]);
        }
    }

    ll siz=(n+1)/2;
    ll ans=0;
    for(i=0;i<v1.size();i++){
        if(siz==0)break;
        while(v1[i]>=2){
            v1[i]-=2;
            siz--;
            ans+=2;
            if(siz==0)break;
        }
    }
    for(i=0;i<v1.size();i++){
        if(siz==0)break;
        while(v1[i]>=1){
            v1[i]-=1;
            siz--;
            ans+=1;
            if(siz==0)break;
        }
    }
    cout<<ans<<endl;
}
