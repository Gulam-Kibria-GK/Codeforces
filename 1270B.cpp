#include<iostream>
#include <iomanip>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<sstream>
#include <bits/stdc++.h>
using namespace std;

#define T(a)            cerr << #a << ": " << a << endl;
#define TT(a,b)         cerr << #a << ": " << a << " | " << #b << ": " << b << endl;
#define TTT(a,b,c)      cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << endl;
#define TTTT(a,b,c,d)   cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;

///**** Max/Min********///

#define _max(aa, bb) (aa = max(aa, bb))
#define max2(aa, bb) max(aa, bb)
#define max3(aa, bb, cc) max(aa, max(bb, cc))
#define max4(aa, bb, cc, fk) max(max(aa, fk), max(bb, cc))
#define _min(aa, bb) (aa = min(aa, bb))
#define min2(aa, bb) min(aa, bb)
#define min3(aa, bb, cc) min(aa, min(bb, cc))
#define min4(aa, bb, cc, dd) min(min(aa, dd), min(bb, cc))


#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define open  freopen("input.txt","r",stdin)
#define close  freopen ("output.txt","w",stdout)

#define mem(n) memset(n,0,sizeof(n))
#define LCM(a,b) (a / __gcd(a,b) ) * b
#define gcd(a,b) __gcd(a,b)
#define for0(l,n) for(int l=0;l<n;l++)
#define for1(l,n) for(int l=1;l<=n;l++)

#define ll long long
int main()
{
    ll i,j,k,n,m,a,b;
    cin>>j;
    while(j--)
    {
        cin>>n;
        vector<ll>v;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll f=0;
        for(i=0; i<n-1; i++)
        {
            if(1<abs(v[i]-v[i+1]))
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        v.clear();
    }

}