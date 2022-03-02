#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll n,k,s=LLONG_MAX,c=0,i,j,x=1;
       cin >> n >> k;
       vector<ll>a(n);
       for(i=0;i<n;i++)cin >> a[ i ];
       for(i=1;i<=100;i++)
       {
           c=0;
           for(j=0;j<n;j+=x)
           {
               if(a[ j ]==i)
               {
                  x=1;
               }
               else
               {
                   c++;
                   x=k;
               }
           }
           if(c<s)s=c;
       }
       cout << s << endl;
    }
}