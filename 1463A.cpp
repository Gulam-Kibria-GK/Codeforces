#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod 1000000007
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,s;
        cin >> a >> b >> c;
        s=a+b+c;
        if(s%9==0 && s/9<=a && s/9<=b && s/9<=c)cout << "YES\n";
        else cout << "NO\n";
    }
}