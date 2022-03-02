#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll diss(ll a,ll b,ll c,ll d)
{
    int sum = abs(a-c) + abs(b-d);
    return sum;
}

ll check(ll x,ll y,ll n)
{
    if(x == 0 && y <= n)
        return 1;
    else if(x <= n && y == n)
        return 2;
    else if(x == n && y <= n)
        return 3;
    return 4;
}

int main()
{
    ll i,j,k,n,m,a,b,c,d;
    ll x,y,dis;

    cin>>n>>x>>y>>a>>b;

    dis=diss(x,y,a,b);

    if(check(x,y,n)!=check(a,b,n))
    {

        ll d1 = diss(x,y,0,0);
        ll d2 = diss(x,y,0,n);
        ll d3 = diss(x,y,n,0);
        ll d4 = diss(x,y,n,n);

        ll d11 = diss(a,b,0,0);
        ll d12 = diss(a,b,0,n);
        ll d13 = diss(a,b,n,0);
        ll d14 = diss(a,b,n,n);

        dis = d1+d11;
        dis = min(dis,d2+d12);
        dis = min(dis,d3+d13);
        dis = min(dis,d4+d14);
    }

    cout<<dis<<endl;
}