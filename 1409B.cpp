#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n,ll m,ll a,ll b,ll r)
{
    if(n>a)
    {
        ll dif=n-a;
        if(dif<r)
        {
            n-=dif;
            r-=dif;
        }
        else
        {
            n-=r;
            r-=r;
        }
    }
    if(m>b){
            ll dif=m-b;
            if(dif<r){
                n-=dif;
                r-=dif;
            }
            else{
                m-=r;
                r-=r;
            }
        }
        //cout<<n<<" "<<m<<endl;
        //cout<<n*m<<endl;
        //cout<<endl;
        return (n*m);
}

int main()
{
    ll i,j,k,n,m,a,b,r;
    cin>>k;
    while(k--)
    {
        cin>>n>>m>>a>>b>>r;
        r=min(r,(abs(n-a)+abs(m-b)));
        ll ans,ans2;
        ans=solve(n,m,a,b,r);
        ans2=solve(m,n,b,a,r);
        cout<<(min(ans,ans2))<<endl;

    }
}