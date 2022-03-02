#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define LCM(a,b) (a / __gcd(a,b) ) * b
#define gcd(a,b) __gcd(a,b)

int main()
{
    ll n,m,i,j,k,l,f=1,f1=1,t;
    cin>>n;
    ll arr[n+6];
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(i=n;i>=1;i--){
        if(arr[i]==0 && f==1){
            k=i;
            f=0;
        }
        if(arr[i]==1 && f1==1){
            l=i;
            f1=0;
        }
    }
    cout<<min(k,l)<<endl;
}