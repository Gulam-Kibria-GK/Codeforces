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
        ll x,y,m,s=0;
        cin >> x >> y;
        m=min(x,y);
        s=y-m+x-m;
        m*=2;
        if(s>0)
        {
            m++;
            m+=(s-1)*2;
        }
        cout << m << endl;
    }
}