#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define m 1000000007
int main()
{
   ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll c=0,i,l;
        string s;
        cin >> s;
        l=s.size();
        c+=(s[ 0 ]-'1')*10;
        for(i=l;i>0;i--)c+=i;
        cout << c << endl;
    }
}