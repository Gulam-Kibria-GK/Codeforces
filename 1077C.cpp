#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>vv[1000007];
vector<ll>v,v2;
map<ll,ll>mm,mm2;
ll ff;
int main()
{
    ll i,j,k,l,n,m,sum=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>m;v.push_back(m);
        sum+=m;mm[m]=1;
        vv[m].push_back(i+1);}
    ll sum2=sum;
    for(i=0; i<n; i++){
        ll x=sum-(2*v[i]);
        if(mm[x]){
            if(v[i]==x){
                if(vv[x].size()==1);
                else{
                    ff=vv[x].size();
                    for(j=0; j<ff; j++){
                        if(i+1!=vv[x][j]){
                            if(mm2[vv[x][j]]==0){
                                v2.push_back(vv[x][j]);
                                mm2[vv[x][j]]=1;}}}}}
            else{
                ff=vv[x].size();
                for(j=0; j<ff; j++){
                    if(mm2[vv[x][j]]==0){
                        v2.push_back(vv[x][j]);
                        mm2[vv[x][j]]=1;}}}}
        sum=sum2;}
    ff=v2.size();
    cout<<ff<<endl;
    for(i=0; i<ff; i++)
        cout<<v2[i]<<" ";
    
}