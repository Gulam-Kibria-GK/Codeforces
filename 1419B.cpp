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
       ll i,n,c=0,s=0;
       cin >> n;
       for(i=1; ;i+=i)
       {
           s=s*2+i*i;
           n-=s;
           if(n>=0)c++;
           else break;
       }
       cout << c << endl;
   }
}