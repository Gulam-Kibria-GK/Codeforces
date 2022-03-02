#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
//#define m 1000000007
int main()
{
   ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll c=0,m=0,i,n,x,y;
       cin >> n;
       vector<ll>a(n+3);
      for(i=1;i<=n;i++)
      {
          cin >> a[ i ];
          if(i>1 && a[ i ]!=a[i-1])
          {
              c=1;
              x=i-1;y=i;
          }
      }
      if(c)
      {
          cout << "YES\n";
          cout << x << ' ' << y << endl;
          for(i=1;i<=n;i++)
          {
              if(i!=x && i!=y)
              {
                  if(a[ i ]!=a[ x ])cout << i << ' ' << x << endl;
                  else if(a[ i ]!=a[ y ])cout << i << ' ' << y << endl;
              }
          }
      }
      else cout << "NO\n";
    }
}