#include<bits/stdc++.h>
using namespace std;
long long add(long long x)
{
    long long m1 = 0,m2 = 10;
    while(x > 0)
    {
        long long z =  x%10;
        x /= 10;
        m1 = max(z,m1);
        m2 = min(z,m2);
    }
    return m1*m2;
}
main()
{
    long long i,j,n,t,a[100000],x,c,k;
    cin >> t;
    while(t--)
    {
     cin >> x >> k;
     k--;
     while(k--)
     {
         long long y = add(x);
         if(y == 0)break;
         x += y;
     }
     cout << x << endl;

    }
}