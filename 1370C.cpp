#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n)
{
    for(ll i=3; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ll value=n/i;
            if((value%2==1 && i%2==0) || (value%2==0 && value!=2 && i%2==1))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if((m!=1 && m%2) || m==2)
        {
            cout<<"Ashishgup"<<endl;
        }
        else
        {
            bool ans=solve(m);
            if(ans){
                cout<<"Ashishgup"<<endl;
            }
            else{
                cout<<"FastestFinger"<<endl;
            }
        }
    }
}