#include<bits/stdc++.h>
using namespace std;
long long i,j,n,k ,a[100000],b[10000],sum,x,t;
main()
{
   cin >> t;
   while(t--)
   {
       sum = x = 0;
       cin >> n >> k;
       for(i = 0; i < n; i++)
       {
           cin >> a[i];
       }
       sort(a,a+n);
       reverse(a,a+n);
       x = n-k;
       for(i = 0; i < x; i++)
       {
           sum += a[i];
       }
       for(i = 0; i < n; i++)
       {
           cin >> b[i];
       }
       j = x;
       for(i; i < 2*n -x; i++)
       {
           b[i] = a[j];
           j++;
       }
       sort(b,b + (2*n - x));
       reverse(b,b + (2*n - x));
       for(i = 0; i < n-x; i++)
       {
           sum += b[i];
       }
       cout << sum << endl;
 
   }
}