#include<bits/stdc++.h>
using namespace std;
long long i,j,n,t,r;
main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> r;
        if(n== 1)cout << 1 << endl;
        else if(n > r)cout << r*(r+1)/2 << endl;
        else cout << (n-1)*n/2 + 1 << endl;
    }
}