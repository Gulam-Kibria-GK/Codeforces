
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
        ll n,x,a[55],b[55],i,c=1;
        cin >> n >> x;
        for(i=0;i<n;i++)cin >> a[ i ];
        for(i=0;i<n;i++)cin >> b[ i ];
        reverse(b,b+n);
        for(i=0;i<n;i++)
        {
            if(a[ i ]+b[ i ]>x)c=0;
        }
        if(c)cout << "YES\n";
        else cout << "NO\n";
    }
}