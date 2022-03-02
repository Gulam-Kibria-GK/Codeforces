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
      ll n,i,a=0,b=0,c;
      string s;
      cin >> n >> s;
      for(i=0;i<n;i++)
      {
          if(s[ i ]=='0' && s[i+1]=='0')a++;
          if(s[ i ]=='1' && s[i+1]=='1')b++;
      }
      c=max(a,b);
      cout << c << endl;
   }
}