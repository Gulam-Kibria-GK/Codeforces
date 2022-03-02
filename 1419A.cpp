#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
  ll t,i,n;
  cin >> t;
  while(t--)
  {
      ll c=0,x,z;
      string s;
      cin >> n >> s;
      x=n%2;
      if(x)z=-1;
      else z=1;
      for(i=x+z;i<n;i+=2)
      {
          if(x)
          {
              if((s[ i ]-48)%2)
              {
                  c=1;
                  break;
              }
          }
          if(x==0)
          {
              if((s[ i ]-48)%2==0)
              {
                  c=2;
                  break;
              }
          }
      }
      if(c==0)
      {
          if(x==1)c=2;
          if(x==0)c=1;
      }
      cout << c << endl;
  }
}