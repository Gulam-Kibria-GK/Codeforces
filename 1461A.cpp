#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   ll t,n,m;
   cin >> t;
   while(t--)
   {
       ll c=0,i;
       cin >> n >> m;
       for(i=0;i<m;i++)cout << "a";
       for(i=m;i<n;i++)
       {
           if(c%3==0)cout << "b";
           else if(c%3==1)cout << "c";
           else cout << "a";
           c++;
       }
       cout << endl;
   }
}