#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<double,string>mm;
int main()
{
    ll i,j,k,l,n,m,a,b=1;
    vector<ll>v,v2;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    if(n==1){
        if(v[0]>=0)
        cout<<v[0]<<endl;
        else{
            cout<<abs(v[0])-1<<endl;
        }
        return 0;
    }
    ll f=0;
    ll ma=0;
    for(i=0;i<n;i++){
        if(v[i]>=0){
        v2.push_back(-1*(v[i]+1));
        ma=max(ma,abs(-1*(v[i]+1)));
        f++;
        }
        else{
            ma=max(ma,abs(v[i]));
            f++;
            v2.push_back(v[i]);
        }
    }
    if(f%2){
        for(i=0;i<n;i++){
            if(v2[i]==(-1*ma)){
                v2[i]=(-1*v2[i])-1;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return 0;
}