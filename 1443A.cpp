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
        ll n,i;
        cin >> n;
        for(i=(4*n)/2;i<4*n;i+=2)cout << i << ' ';
        cout << endl;
    }
}