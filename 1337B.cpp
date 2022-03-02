#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,n,m,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        while(b>0 && a>20){
            a=(a/2)+10;
            b--;
        }
        while(c--){
            a-=10;
        }
        if(a>=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}