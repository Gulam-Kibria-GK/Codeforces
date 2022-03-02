#include<bits/stdc++.h>
using namespace std;
#define ll long long

void fb(ll int a,ll int b)
{
    if(a==0 || b==0)
    {
        cout<<a<<" "<<b<<endl;
        return;
    }
    else if(a>=2*b)
        return fb(a%=2*b,b);
    else if(b>=2*a)
        return fb(a,b%=2*a);
    else
        {
            cout<<a<<" "<<b<<endl;
            return;
        }
}

int main()
{
    ll a,b,n,m,i,j;
    cin>>n>>m;
    fb(n,m);
}