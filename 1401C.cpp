#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,i,j;
    cin >> t;
    while(t--)
    {
        ll n,x,mm,f=1;
        cin >> n;
        ll a[n+5],b[n+5];
        for(i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        mm=b[0];
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                x=__gcd(a[i],mm);
                if(x!=mm)f=0;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}