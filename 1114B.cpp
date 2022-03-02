#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k=0,l=0,n,m,d,a,b,ans=0;
    vector<ll>v,v1;
    map<ll,ll>mm,mm1;
    cin>>n>>d>>a;
    for(i=0;i<n;i++){
        cin>>b;
        v.push_back(b);
        v1.push_back(b);
    }
    sort(v1.rbegin(),v1.rend());
    for(i=0;i<d*a;i++){
        mm[v1[i]]++;
        ans+=v1[i];
    }
    cout<<ans<<endl;
    for(i=0;i<n;i++){
        if(mm[v[i]]){
            k++;
            mm[v[i]]--;
        }
        if(k==d){
            l++;
            cout<<i+1<<" ";
            k=0;
        }
        if(l==a-1)return 0;
    }

}