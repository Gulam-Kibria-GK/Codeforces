#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n>>m;
        ll s=0,l=0,ss=0;
        for(i=0;i<n;i++){
            cin>>a;
            s+=a;
            l+=(a/m);
            if(a%m!=0){
                l++;
            }
        }
        ss=s/m;
        if(s%m!=0)ss++;
        cout<<ss<<" "<<l<<endl;
    }
}