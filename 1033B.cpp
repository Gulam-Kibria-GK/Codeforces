#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    long long i,j,k,l,m;
    cin>>m;
    long long a,b,c,d;
    while(m--)
    {
        cin>>a>>b;
        c=a+b;
        //cout<<c<<endl;
        if(isPrime(c) && a-b==1){
          cout<<"YES"<<endl;
    }
      else{
            cout<<"NO"<<endl;
        }
    }
}