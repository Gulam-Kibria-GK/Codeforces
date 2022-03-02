#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,f=0;
    cin>>n;
    vector<ll>v,v2;
    map<ll,ll>mm,mm2;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        mm[a]++;
    }
    sort(v.rbegin(),v.rend());
    for(i=0;i<n;i++){
        if(v[0]%v[i]==0 && mm2[v[i]]==0){
            mm2[v[i]]=1;
            mm[v[i]]--;
            f++;
        }
    }
    for(i=0;i<n;i++){
        if(mm[v[i]]!=0){
           v2.push_back(v[i]);
        }
    }
    sort(v2.rbegin(),v2.rend());
    for(i=0;i<v2.size();i++){
        if(v2[0]%v2[i]==1){
            v2[0]*=v[i];
        }
    }
    cout<<v[0]<<" "<<((n==f)?0:v2[0])<<endl;
}