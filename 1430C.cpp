#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
  //ios::sync_with_stdio(0);cin.tie(0);
  ll t;
  cin >> t;
  while(t--)
  {
      ll n,a,b,z,i;
      cin >> n;
      vector<ll>s(n+2);
      for(i=1;i<=n;i++)s[ i ]=i;
   if(n>2)swap(s[n-1],s[n-2]);
      cout << 2 << endl;
      while(n>1)
      {
          a=s[n];
          b=s[n-1];
          cout << a << ' ' << b << endl;
          s[n-1]=(a+b)/2;
          n--;
      }
  }
}