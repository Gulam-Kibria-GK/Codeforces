#include <bits/stdc++.h>
#include<iostream>
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

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define open  freopen("input.txt","r",stdin)
#define close  freopen ("output.txt","w",stdout)
#define db double
#define ll long long
#define lll unsigned long long
#define loop(i,a,n) for(int i=a;i<=n;i++)
#define sz size()
#define sf scanf
#define sf1(a) sf("%d",&a)
#define sf2(a,b) sf("%d %d",&a,&b)
#define sf3(a,b,c) sf("%d %d %d",&a,&b,&c)
#define sf4(a,b,c,d) sf("%d %d %d %d",&a,&b,&c,&d)
#define sfd1(a) sf("%lf",&a)
#define sfd2(a,b) sf("%lf %lf",&a,&b)
#define sfd3(a,b,c) sf("%lf %lf %lf",&a,&b,&c)
#define sfl1(a) sf("%lld",&a)
#define sfl2(a,b) sf("%lld %lld",&a,&b)
#define sfl3(a,b,c) sf("%lld %lld %lld",&a,&b,&c)

#define pii pair<int,int>
#define pll pair<ll,ll>

#define pf printf
#define pfi(x) pf("%d",x)
#define pfl(x) pf("%lld",x)
#define pf1(x) pf("%d\n",x)
#define pf2(x,y) pf("%d %d\n",x,y)
#define pf3(x,y,z) pf("%d %d %d\n",x,y,z)
#define pfl1(x) pf("%lld\n",x)
#define pfl2(x,y) pf("%lld %lld\n",x,y)
#define pfl3(x,y,z) pf("%lld %lld %lld\n",x,y,z)
#define pfd(x,k) cout<<fixed<<setprecision(k)<<x;


#define f(n) for(i=0;i<n;i++)
#define f(n1) for(i=1;i<=n;i++)
#define f(n2) for(i=n-1;i>=0;i--)
#define f(n3) for(i=n;i>=0;i--)


#define NL puts("")
#define bug(x) cerr<<"Value of "<<#x<<" is "<<x<<endl
#define bug2(x,y) cerr<<#x<<" = "<<x<<" and "<<#y<<" = "<<y<<endl
#define pft(tc) printf("Case %d:",tc++)
#define pft2(tc) printf("Case #%d:",tc++)
#define PI (2.0*acos(0.0))
//#define PI acos(-1.0)
#define mem(a,v) memset(a,v,sizeof a)
#define endl '\n'
#define pb push_back
#define xx first
#define yy second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define HASH1 (lll) 101949101
#define HASH2 (lll) 104282401
#define HASH3 (lll) 701393107
#define LEN(a) a.length()
#define ITERATE(x,it) for(typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define RITERATE(x,it) for(typeof(x.rbegin()) it=x.rbegin();it!=x.rend();it++)
#define eps 1e-6
#define ub upper_bound // return the right most index of x<val
#define lb lower_bound // return the right most index of x<=val
#define linf 3000000000000000000ll
#define inf 2000000000


int main()
{
    int i,j;
    char st[1000];
    char st2[1000];
    cin>>st>>st2;
    for(i=0; i<strlen(st); i++)
    {
        if(st[i]>=65 && st[i]<=90)
            st[i]+=32;

    }
    for(i=0; i<strlen(st2); i++)
    {
        if(st2[i]>=65 && st2[i]<=90)
            st2[i]+=32;
    }

    if(strcmp(st,st2)==0)
        cout<<"0"<<endl;
    else if(strcmp(st,st2)>0)
        cout<<"1"<<endl;
    else if(strcmp(st,st2)<0)
        cout<<"-1"<<endl;
    return 0;
}