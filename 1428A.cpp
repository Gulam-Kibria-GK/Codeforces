#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x = abs(a - c) + abs(b - d);
        if (a - c == 0 || b - d == 0)
            cout << x << endl;
        else
            cout << x+2<< endl;
    }
    return 0;
}