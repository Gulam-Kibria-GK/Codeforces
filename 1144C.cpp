#include<bits/stdc++.h>

using namespace std;
#define ll long long

map<ll,ll>mm,mm2;

int main()
{
    ll i,j,k,n,m,a,b=0;
    cin>>n;
    vector<ll>v,v2,v3;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        mm[a]++;
        if(mm[a]==3)b=1;
    }
    if(b){
        cout<<"NO"<<endl;
        return 0;
    }
    ll ma=9999999;
    sort(v.rbegin(),v.rend());
    for(i=0;i<n;i++){
        if(ma>v[i]){
            v3.push_back(v[i]);
            ma=v[i];
            mm2[i]=1;
        }
    }
    for(i=0;i<n;i++){
        if(mm2[i]==0){
            v2.push_back(v[i]);
        }
    }
    cout<<"YES"<<endl;
    sort(v2.begin(),v2.end());
    cout<<v2.size()<<endl;
    for(i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl<<v3.size()<<endl;
    for(i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
}