#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
   ll n,a[100004],i,c=-1;
   cin >> n;
   for(i=0;i<n;i++)cin >> a[ i ];
   sort(a,a+n);
   if(n%2)cout << n/2 << endl;
   else cout << n/2 -1 << endl;
   for(i=0;i<n;i++)
   {
       if(i%2==0)
       {
           c++;
           cout << a[n/2+c] << ' ';
       }
       else cout << a[ c ] << ' ';
   }
}