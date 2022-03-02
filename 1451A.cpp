#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod  998244353
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,s=0,c,i;
        cin >> n;
       if(n==2)s=1;
       else if(n==3 || n%2==0)s=2;
       else if(n>3)s=3;
        cout << s << endl;
    }
}