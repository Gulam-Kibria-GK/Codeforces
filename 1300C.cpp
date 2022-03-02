#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    vector<ll>v;
    map<ll,ll>mm;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    ll f,ans;
    for(i=31;i>=0;i--){
        f=0,ans=-1;
        for(j=0;j<n;j++){
            ll value=(v[j]/(powl(2,i)));
            if(value%2){
                f++;
                ans=j;
            }
            if(f>1){
                f=0;
                ans=-1;
                break;
            }
        }
        if(f==1){
            goto solution;
        }
        else{
            ans=-1;
        }
    }
    solution:
    if(ans==-1){
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        cout<<v[ans];
        for(i=0;i<n;i++){
            if(ans!=i)
            cout<<" "<<v[i];
        }
    }

}