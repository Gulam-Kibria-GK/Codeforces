#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>v;

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k>>l;
        if(k%2==0 && l%2==0){
            cout<<((l+k)/2)<<endl;
        }else if(k%2==1 && l%2==1){
            cout<<(-1)*((l+k)/2)<<endl;
        }else if(k%2==0 && l%2==1){
            cout<<(-1)*((l-k-1)/2+1)<<endl;
        }else if(k%2==1 && l%2==0){
            cout<<((l-k)/2+1)<<endl;
        }
    }

}