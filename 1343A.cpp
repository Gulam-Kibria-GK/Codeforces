#include<bits/stdc++.h>
#define ffr(i,a,b) for(i=a;i<b;i++)
#define ffrr(i,a,b) for(i=a;i<=b;i++)
#define pb push_back
#define mm(a,b) memset(a,b,sizeof(a))
#define ll long long int
#define mp make_pair
 
using namespace std;
 
int main()
{
    int ttt; cin >> ttt;
    while(ttt--)
    {
        ll n, t;
        cin >> n;
        t=3;
        while(1)
        {
            if(n%t==0) break;
            t+=t; t++;
        }
        cout << n/t << endl;
    }
}