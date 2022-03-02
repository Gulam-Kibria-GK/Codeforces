#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll an,f=0;

void ans(ll n,ll m,ll cnt)
{
    if(n>m)return;
    else if(n==m){
       an=cnt;
       f=1;
       return;
    }
    ans(n*2,m,cnt+1);
    ans(n*3,m,cnt+1);
}

int main(){
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m;
    ans(n,m,0);
    if(f==1)cout<<an<<endl;
    else
    cout<<-1<<endl;
    return 0;
}