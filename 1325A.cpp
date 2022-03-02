#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,h,hh=2;
    cin>>k;
    while(k--)
    {
        cin>>n;

        if(n==2)
        {
            cout<<1<<" "<<1<<endl;
        }
        else
        {
            h=__gcd(hh,n-hh);
            if(h==1)
            {
                cout<<1<<" "<<n-1<<endl;
            }
            else
                cout<<2<<" "<<n-2<<endl;
        }
    }
}