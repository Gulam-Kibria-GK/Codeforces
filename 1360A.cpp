#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        ll temp=min(a,b);
        a=max(a,b);
        b=temp;
        b*=2;
        if(b>=a){
            cout<<b*b<<endl;
        }
        else{
            cout<<a*a<<endl;
        }

    }
}