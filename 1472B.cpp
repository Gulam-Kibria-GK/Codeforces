#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod 1000000007
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll a=0,b=0,s=0,p,i,n,q=0,w=0;
       cin >> n;
       for(i=0;i<n;i++)
       {
           cin >> p;
           s+=p;
           if(p==2)b++;
           else a++;
       }
        q+=(b/2)*2;w+=(b/2 +b%2)*2;
        if(w>q)
        {
            q+=2;
            a-=2;
        }
      if(a>0)
      {
          q+=a/2;
          w+=a/2 +a%2;
      }
      if(q==w && a>=0)cout << "YES\n";
      else cout << "NO\n";
    }
}