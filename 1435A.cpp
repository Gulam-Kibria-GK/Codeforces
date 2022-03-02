#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod 1000000007
int main()
{
   ios::sync_with_stdio(0);cin.tie(0);
   ll t;
   cin >> t;
   while(t--)
   {
       ll s=1,n,i,c;
       cin >> n;
       vector<ll>a(n),b(n);
       for(i=0;i<n;i++)
       {
           cin >> a[ i ];
       }
      for(i=0;i<n;i+=2)
      {
          cout << -a[i+1] << ' ' << a[ i ] << ' ';
      }
      cout << endl;
   }
}