#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll n=10000000;
bitset<n+6>st;
ll arr[n+5],len=0;

void sieve(){
     ll i,j,k,l;
     st.set();
     for(i=4;i<n;i+=2){
        st[i]=0;
     }
     for(i=3;i*i<n;i+=2){
        if(st[i]==1){
            for(j=i*i;j<n;j+=(i*2)){
                st[j]=0;
            }
        }
     }
     for(i=2;i<n;i++){
        if(st[i]==1){
            arr[len]=i;
            len++;
        }
     }
}
int main()
{
    sieve();
    ll i,j,k,l=0,p=0;
    cin>>k;
    for(j=6; j<=k; j++)
    {
        l=0;
        for(i=0; j>=arr[i]; i++)
        {
            if(j%arr[i]==0)l++;
        }
        if(l==2)p++;
    }
    cout<<p<<endl;
}