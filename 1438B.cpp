#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod 1000000007
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t,n,i;
    cin >> t;
    while(t--)
    {
        ll c=0;
        cin >> n;
        vector<ll>b(n);
        for(i=0;i<n;i++)cin >> b[ i ];
        sort(b.begin(),b.end());
        for(i=0;i<n-1;i++)
        {
            if(b[ i ]==b[i+1])
            {
                c=1;
                break;
            }
        }
        puts(c?"YES":"NO");
    }
}