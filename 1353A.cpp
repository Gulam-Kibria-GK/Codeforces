#include<bits/stdc++.h>
using namespace std;
long long i,j,n,t,p,c,x,y,a,b,m;
main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(n == 1)
        {
            puts("0");
        }
        else if(n == 2)
        {
            cout << m << endl;
        }
        else
        {
            cout << m*2 << endl;
        }
 
    }
}