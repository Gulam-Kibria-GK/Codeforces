#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,j,k,l,n,m,a,b;
    string st;
    cin>>n>>st;
    map<char,ll>mm;
    for(i=0;i<n;i++){
        mm[st[i]]++;
    }
    if(mm[st[0]]==n){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(i=0;i<n-1;i++){
        if(st[i]!=st[i+1]){
            cout<<st[i]<<st[i+1]<<endl;
            break;
        }
    }
    return 0;
}