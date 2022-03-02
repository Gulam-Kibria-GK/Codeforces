#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<pair<ll,ll> >v;
vector<pair<ll,ll> >v1,v2;

int main(){
    ll i,j,k,l=0,n,m,a,b,sum=0;
    cin>>n;
    n=n*2;
    map<ll,ll>mm;
    map<ll,ll>mm2;
    for(i=0; i<n; i++){
        cin>>b;
        v.push_back({b,i});
        if(b==1)sum+=i;
    }
    for(i=0; i<n; i++){
        if(mm[v[i].first]==0){
            mm[v[i].first]=2;
            mm2[v[i].second]=2;
            v1.push_back({v[i].first,v[i].second});
        }
    }
    for(i=0; i<n; i++){
        if(mm2[v[i].second]==0){
            mm2[v[i].second]=2;
            v2.push_back({v[i].first,v[i].second});
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    mm.clear();
    for(i=0; i<v1.size()-1; i++){
        if((abs(v1[i].second-v1[i+1].second)) <=(abs(v1[i].second-v2[i+1].second))){
            sum+=abs(v1[i].second-v1[i+1].second);
            mm[v1[i].second]=2;
            mm[v1[i+1].second]=2;
        }
        else{
            sum+=(abs(v1[i].second-v2[i+1].second));
            mm[v1[i].second]=2;
            mm[v2[i+1].second]=2;
        }
    }
    for(i=0; i<v2.size()-1; i++){
        if((mm[v2[i].second]!=2 &&  mm[v2[i+1].second]!=2))
                sum+=abs(v2[i].second-v2[i+1].second);
        else if((mm[v2[i].second]!=2 &&  mm[v2[i+1].second]!=2))
                sum+=(abs(v2[i].second-v1[i+1].second));
    }
    cout<<sum<<endl;
}