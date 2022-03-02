#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,k,n,m,a,b,c,d;
    cin>>k;
    while(k--){
        cin>>n;
        if(n%2==0){
            cout<<(n/2)-1<<endl;
        }
        else{
            cout<<n/2<<endl;
        }
    }
}