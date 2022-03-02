#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod 1000000007
int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
     ll n,c,s,x,i;
     cin >> n;
    for(i=n; ;i++){
         s=i;
         c=1;
         while(s)
         {
             x=s%10;
             if(x!=0 && i%x)
             {
                 c=0;
                 break;
             }
             s/=10;
         }
         if(c)
         {
             cout << i << endl;
             break;
         }
     }
  }
}