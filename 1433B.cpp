#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define m 1000000007
int main()
{
   ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll n,i,c=-1,s=0;
       cin >> n;
       vector<ll>a(n);
       for(i=0;i<n;i++)cin >> a[ i ];
       for(i=0;i<n;i++)
       {
           if(a[i]==1 && a[i+1]==0 && c==-1)c++;
           if(a[ i ]==0 && c>=0)c++;
           if(a[ i ]==1 && c>s)s=c;
       }
       cout << s << endl;
    }
}