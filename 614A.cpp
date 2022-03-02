#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll n, ll k)
{
    ll i,ans = 1;
    for(i=0; i<k; i++)
    {
        ans *= n;
    }
    return ans;
}

int main()
{
    ll i=-1,l,r,k,f=0,valu=0;
    cin>>l>>r>>k;
    while(1)
    {
        i++;
        valu=power(k,i);

        if(valu>=l && valu<=r)
        {
            cout<<valu<<" ";
            f=1;
        }
        if(valu>r/k)
            break;
    }
    if(f==0)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}