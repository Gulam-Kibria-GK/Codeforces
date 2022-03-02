#include<bits/stdc++.h>
using namespace std;
long long n,m;
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(max(n,m) == 2 || min(n,m) == 1)
        {
            puts("YES");
        }
        else{
            puts("NO");
        }
    }
}