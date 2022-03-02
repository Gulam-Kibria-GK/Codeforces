#include<bits/stdc++.h>
using namespace std;
int i,j,n,t,k,ans,x[100000];
string s;
main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while(t--)
    {
        set<int>p;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for(i = 0; i < n-1; i++)
        {
            for(j = i+1; j< n; j++)
            {
                k = x[j]-x[i];
                p.insert(k);
            }
        }
        cout << p.size() << '\n';
        k = 0;

    }
}