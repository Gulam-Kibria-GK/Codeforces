#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c=0,ans=0;
    cin>>n;
    string st;
    cin>>st;
    for(i=0;i<n;i++){
            c++;
        if((st[i]-48)%2==0){
            ans+=c;
        }
    }
    cout<<ans<<endl;
}