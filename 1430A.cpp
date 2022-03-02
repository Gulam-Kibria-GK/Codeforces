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
     ll n,a=0,c=0,s[4]={0},i;
     cin >> n;
     if(n==1 || n==2 || n==4)cout << -1 << endl;
     else
     {
         a=n/3;
         c=n%3;
         if(c==1)
         {
             a-=2;
             s[2]=1;
         }
         else if(c==2)
         {
             a--;
             s[1]=1;
         }
         s[ 0 ]=a;
         for(i=0;i<3;i++)cout << s[ i ] << ' ';
         cout << endl;
     }
 }
}