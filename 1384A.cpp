#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,a[105],i,j;
   cin >> t;
   while(t--)
   {
       string s(200, 'a');
       cout << s << '\n';
       cin >> n;
       for(i=0;i<n;i++)
       {
           cin >> j;
           s[ j ] = s[ j ] == 'a'?'b':'a';
           cout << s << '\n';
       }
   }
 
}