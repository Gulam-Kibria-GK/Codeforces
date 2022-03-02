#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ans(ll n){
    ll i,j;
    for(i=2;i*i<n;i++){
        if(n%i==0)return 1;
    }
    return 0;
}

int main()
{
    ll i,j,k,l,n,m,a=1000000000,b;
    cin>>n;
    for(i=1;i<=n;i++){
        if(ans(a) && ans(a-n)){
            cout<<a<<" "<<a-n<<endl;
            return 0;
        }
        else{
            a--;
        }
    }

}