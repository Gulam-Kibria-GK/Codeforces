#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,ab;
    cin>>k;
    while(k--){
        cin>>n>>m;
        ll value=((m*2)-1);
        ll all=((value+1)*value)/2;
        ll even=((value/2)*((value/2)+1));
        all-=even;
        //cout<<all<<endl;
        if((n%2)==(m%2) && n>=all ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}