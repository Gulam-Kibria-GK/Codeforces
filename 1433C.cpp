#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
//#define m 1000000007
int main()
{
   ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll c=-1,m=0,i,n;
       cin >> n;
       vector<ll>a(n+3);
       for(i=1;i<=n;i++)
       {
           cin >> a[ i ];
           if(a[ i ]>m)m=a[ i ];
       }
       for(i=1;i<=n;i++)
       {
           if(i<n && a[ i ]==m && a[i+1]<m)
           {
               c=i;
               break;
           }
           if(i>1 && a[ i ]==m && a[i-1]<m)
           {
               c=i;
               break;
           }
       }
       cout << c << endl;
    }
}