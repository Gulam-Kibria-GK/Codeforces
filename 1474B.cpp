#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
int mou(int n)
{
    int c=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=0;
            break;
        }
    }
    return c;
}
int main()
{
   ll t;
   cin >> t;
   while(t--)
   {
       ll d,x,y,c;
       cin >> d;
       x=1+d;
      while(x)
      {
          if(mou(x))break;
          else x++;
      }
      y=x+d;
      while(y)
      {
          if(mou(y))break;
          else y++;
      }
      cout << x*y << endl;
   }
}