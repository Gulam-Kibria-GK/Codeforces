#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,ab;
    cin>>n;
    vector<ll>v;
    vector<ll>v1;
    for(i=0;i<n;i++){
        cin>>ab;
        v.push_back(ab);
    }
    sort(v.begin(),v.end());
    map<ll,ll>mm;
    for(i=0;i<n-1;i+=2){
        v1.push_back(v[i]);
        mm[i]=1;
    }
    for(i=n-1;i>=0;i--){
        if(mm[i]==0){
            v1.push_back(v[i]);
        }
    }
    for(i=1;i<n-1;i++){

        if((v1[0]<v1[1]+v1[n-1]) && (v1[n-1]<v1[0]+v1[n-2])){
            if(v1[i]<v1[i+1]+v1[i-1]);
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}