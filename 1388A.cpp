#include<bits/stdc++.h>
using namespace std;
long long t,n,x;
int main()
{
  cin >> t;
  while(t--)
  {
      cin >> n;
      if(n<=30)cout << "NO\n";
      else
      {
          x = n-30;
          if(x==6)printf("YES\n5 6 10 15\n");
          else if(x==10)printf("YES\n6 10 15 9\n");
          else if(x==14)printf("YES\n6 10 15 13\n");
          else printf("YES\n6 10 14 %d\n",x);
      }
  }
}