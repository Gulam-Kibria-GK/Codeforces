#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,n,m,l=0,q,k;
    double g;
    cin>>q;
    while(q--){
            l=0;
        cin>>n>>m>>k;
        g=(1.0*k)/2;
        if(m<=g){
            cout<<n*m<<endl;
        }
        else{
            l=(n/2)*k;
            if(n%2==1){
                l+=m;
            }
            cout<<l<<endl;
        }
    }
}