#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265
#define mod 1000000007
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll r=0,b=0,i,n;
        string x,y;
        cin >> n >> x >> y;
        for(i=0;i<n;i++)
        {
            if(x[ i ]-'0'<y[ i ]-'0')b++;
            else if(x[ i ]-'0'>y[ i ]-'0')r++;
        }
        if(r>b)cout << "RED\n";
        else if(b>r)cout << "BLUE\n";
        else cout << "EQUAL\n";
    }
}