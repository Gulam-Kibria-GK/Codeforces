#include<bits/stdc++.h>
using namespace std;
#define ll long long

main()
{
    ll i,j,n,t;
    cin >> t;
    while(t--)
    {
       string s;
       cin >> n >> s;
       for(i = 0; j < n; i++)
       {
           if(i%2 == 0)
           {
               cout << s[i];
               j++;
           }
       }
       cout << endl;
       j = 0;
    }
}