#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll s=0,n,m,i,a[102]={0},b[102]={0},x;
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            cin >> x;
            a[x]=1;
        }
        for(i=0;i<m;i++)
        {
            cin >> x;
            b[x]=1;
        }
        for(i=1;i<=100;i++)
        {
            if(a[ i ]==1 && b[ i ]==1)s++;
        }
        cout << s << endl;
    }
}