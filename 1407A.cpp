#include<bits/stdc++.h>
using namespace std;
long long i,j,n,k,cnt0,cnt1,x,y,t,c;
main()
{
  cin >> t;
  while(t--)
  {
      cnt1 = cnt0 = c = 0;
      cin >> n;
      vector<int> v(n);
      for(i = 0; i < n; i++)
      {
          cin >> v[i];
          if(v[i] == 1)
          {
              cnt1++;
          }
          else
          {
              cnt0++;
          }
      }
      if(cnt1 <= n/2)
      {
          cout << cnt0 << endl;
          for(i = 0; i < n; i++)
          {
              if(v[i] != 1)
              {
                  cout << v[i] << " ";
              }
          }
      }
      else
      {
          if(cnt1&1)
          {
             cout << cnt1 - 1 << endl;
             for(i = 0; i < n; i++)
             {
                 if(v[i] == 1 )
                 {
                     c++;
                 }
                 if(v[i] == 1 && c > 1)
                 {
                     cout << v[i] << " ";
                 }
             }
          }
          else
          {
              for(i = 0; i < n; i++)
              {
                  cout << cnt1 << endl;
                  for(i = 0; i < n; i++)
                  {
                      if(v[i] == 1)
                      {
                          cout << "1 ";
                      }
                  }
              }
          }
      }
      cout << endl;
  }
}