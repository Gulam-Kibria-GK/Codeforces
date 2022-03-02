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
        ll n,i,s=0,x=0,y=0;
        string a;
        cin >> a;
        for(i=0;i<a.size();i++)
        {
            if(a[ i ]=='(')x++;
            if(a[ i ]=='[')y++;
            if(a[ i ]==')' && x>0)
            {
                s++;
                x--;
            }
            if(a[ i ]==']' && y>0)
            {
                s++;
                y--;
            }
        }
        cout << s << endl;
    }
}