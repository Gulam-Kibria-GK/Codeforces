#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define MAXN                        200007
 
int main ()
{

    int test_case; cin >> test_case;
    while(test_case--)
    {
        ll n, sum = 0, num = 8; cin >> n;
 
        if (n == 1) {cout << 0 << endl; continue;}
 
        for (int i = 1; i <= n / 2; ++i)
        {
            sum += num * i;
            num += 8;
        }
        cout << sum << endl;
    }
 
 
    return 0;
}