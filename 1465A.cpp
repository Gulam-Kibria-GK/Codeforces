#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,s;
    string st;
    cin>>k;
    while(k--){
        cin>>n>>st;
        ll f=0;
        for(i=n-1;i>=0;i--){
            if(st[i]==')')f++;
            else break;
        }
        if(f>(n-f)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}