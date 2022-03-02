#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n;
        if(n%2==0){
            m=n/2;
            while(m){
                cout<<1;
                m--;
            }
            cout<<endl;
        }
        else{
            m=n/2;
            m--;
            cout<<7;
            while(m){
                cout<<1;
                m--;
            }
            cout<<endl;
 
        }
    }
}