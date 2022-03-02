#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m,s=0,c=0,p=LLONG_MAX,i,j,a;
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> a;
                p=min(p,abs(a));
                s+=abs(a);
                if(a<0)c++;
            }
        }
        if(c%2)s-=2*p;
        cout << s << endl;
    }
}