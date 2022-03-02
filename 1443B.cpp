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
        ll a,b,c=0,i,z[100040]={0},p=0,x=0;
       string s;
       cin >> a >> b >> s;
       for(i=0;i<s.size();i++)
       {
           if(c==0 && s[ i ]=='1')c=1;
           else if(c>0)
           {
               if(s[ i ]=='0' && s[i-1]=='0')c++;
               if(s[ i ]=='0' && s[i-1]=='1')
               {
                   z[p++]=c;
                   c=1;
               }
               if(s[i]=='1' && s[i-1]=='0')
               {
                   z[p++]=c;
                   c=1;
               }
           }
       }
       if(c>0)x+=a;
       for(i=1;i<p;i+=2)
       {
           if(z[i]*b < a)x+=z[i]*b;
           else x+=a;
       }
       cout << x << endl;
    }
}