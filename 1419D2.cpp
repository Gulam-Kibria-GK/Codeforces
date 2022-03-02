#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
   ll n,a[100004],i,c=-1,s[100004],z=0;
   cin >> n;
   for(i=0;i<n;i++)cin >> a[ i ];
   sort(a,a+n);
 
   for(i=0;i<n;i++)
   {
       if(i%2==0)
       {
           c++;
          s[ i ]=a[n/2+c];
       }
      else s[ i ]=a[ c ];
   }
   for(i=1;i<n-1;i++)
   {
       if(s[ i ] < s[i-1] && s[ i ] < s[i+1])z++;
   }
   cout << z << endl;
   for(i=0;i<n;i++)cout << s[ i ] << ' ';
}