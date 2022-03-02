#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll n=1000000;
ll arr[n+5];
bitset<n+6>bt;
ll len=0;
map<ll,ll>mm;

void sieve(ll k)
{
    ll i,j;
    bt.set();
    for(i=4; i<=k; i+=2)
    {
        bt[i]=0;
    }
    for(i=3; i*i<=k; i+=2)
    {
        if(bt[i]==1)
        {
            for(j=i*i; j<=k; j+=(i*2))
            {
                bt[j]=0;
            }
        }
    }
    for(i=2; i<=k; i++)
    {
        if(bt[i]==1)
        {
            arr[len++]=i;
        }
    }
}


int main()
{
    ll i,j,k,l,m,a=0;

    cin>>k>>l;
    sieve(k);
    for(i=2; i<len; i++)
    {
        for(j=0; j<len; j++)
        {
            if(arr[j]+arr[j+1]+1==arr[i])
            {
                a++;
                break;
            }
        }
    }
    //cout<<a<<endl;
    if(a>=l)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}