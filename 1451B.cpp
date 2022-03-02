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
        ll n,q,l,r,i,c;
        string s;
        cin >> n >> q >> s;
        while(q--)
        {
            cin >> l >> r;
            c=0;
            for(i=0;i<l-1;i++)
            {
                if(s[ i ]==s[l-1])c=1;
            }
            for(i=r;i<n;i++)
            {
                if(s[ i ]==s[r-1])c=1;
            }
            puts(c?"YES":"NO");
        }
    }
}