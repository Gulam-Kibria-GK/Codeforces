#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 2>>29
#define pfd(x,k) cout<<fixed<<setprecision(k)<<x;
#define TT(a,b)         cerr << #a << ": " << a << " | " << #b << ": " << b << endl;
#define TTT(a,b,c)      cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << endl;
ll isPrime(ll n)
{
    ll i;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}



int main()
{
    ll i,j,k,l,n,m,a,f=0;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        return 0;
    }
    else{
        for(i=3; i*i<=n; i+=2){
            if(isPrime(i)){
                if(n%i==0){
                    cout<<1+(n-i)/2<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<1<<endl;
    return 0;
}