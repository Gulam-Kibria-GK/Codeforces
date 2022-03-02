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
       ll a,b,c,d,s;
       cin >> a >> b >> c >> d;
       s=max(a+b,c+d);
       cout << s << endl;
    }
}