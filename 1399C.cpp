#include<bits/stdc++.h>
using namespace std;
long long t,n;
int main()
{
  cin >> t;
  while(t--)
  {
      long long i,j,k,c,s=0,x,a[100];
      cin >> n;
      for(i=0;i<n;i++)cin >> a[ i ];
      sort(a,a+n);
      for(k=2;k<=2*n;k++)
      {
          c=0;x=n-1;
          for(i=0;i<n;i++)
          {
              for(j=x;j>i;j--)
              {
                  if(a[ i ]+a[ j ] ==k)
                  {
                      c++;
                      x=j-1;
                      break;
                  }
              }
          }
          if(c>s)s=c;
      }
      cout << s << endl;
  }
}