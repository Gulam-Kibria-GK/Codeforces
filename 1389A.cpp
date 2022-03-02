#include<bits/stdc++.h>
using namespace std;
long long i,j,n;
string s;
main()
{
    int t;
    cin >> t;
    while(t--)
    {
       cin >> i >> j;
       if(i*2 <= j)
       {
           cout << i << " " << i*2 << endl;
       }
       else{
        cout << "-1" << " -1" << endl;
       }
    }
}