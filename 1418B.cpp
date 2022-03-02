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
      ll n,a[101],i,j,b[101],temp;
      cin >> n;
      for(i=0;i<n;i++)cin >> a[ i ];
      for(i=0;i<n;i++)cin >> b[ i ];
      for(i=1;i<n;i++)
      {
          if(b[ i ]==0)
          {
              for(j=0;j<i;j++)
              {
                  if(b[ j ]==0)
                  {
                      if(a[ i ]>a[ j ])
                      {
                          temp=a[ i ];
                          a[ i ]=a[ j ];
                          a[ j ]=temp;
                      }
                  }
              }
          }
      }
      for(i=0;i<n;i++)cout << a[ i ] << ' ';
      cout << endl;
  }
}