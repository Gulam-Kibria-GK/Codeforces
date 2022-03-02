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
        ll n,a,b,h,x=0,y=0,i;
        string s;
        cin >> n >> a >> b >> h >> s;
        if(a>b+h)a=b+h;
        else if(b>a+h)b=a+h;
        for(i=0;i<n;i++)
        {
            if(s[ i ]=='0')x++;
            else y++;
        }
        cout << x*a+y*b << endl;
    }
}