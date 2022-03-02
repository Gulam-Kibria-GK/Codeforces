#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
      ll x,y,k,z,s=1,p;
      cin >> x >> y >> k;
      z = y*k+k;
      s+=(z-x)/(x-1);
      p=((z-x)/(x-1))*(x-1) + x;
      p-=y*k;s+=k;
      if(p<k)
      {
          s+=(k-p)/(x-1);
          if((k-p)%(x-1))s++;
      }
      cout << s << endl;
  }
}