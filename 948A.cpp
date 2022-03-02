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
#define sfd(a) sf("%lf",&a)
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

int main()
{
    int i,j,a,b,c,k,l,n,m,x=0;
    sf2(a,b);
    char ch[a+2][b+2];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
            cin>>ch[i][j];
    }
    for(i=0; i<a; i++)
    {
        if(x==1)
            break;
        for(j=0; j<b; j++)
        {
            if(ch[i][j]=='.')
                ch[i][j]='D';
        }
    }

    for(i=0; i<a; i++)
    {
        if(x==1)
           break;
        for(j=0; j<b; j++)
        {
            if((ch[i][j]=='S' && ch[i][j+1]=='W') || (ch[i][j]=='W' && ch[i][j+1]=='S'))
            {
                x=1;
                break;
            }

            else if((ch[i][j]=='S' && ch[i+1][j]=='W') || (ch[i][j]=='W' && ch[i+1][j]=='S'))
            {
                x=1;
                break;
            }
            else
                x=0;
        }
    }
    if(x==0)
    {
        cout<<"Yes"<<endl;
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
                cout<<ch[i][j];
            cout<<endl;
        }
    }
    else
        cout<<"No"<<endl;

    return 0;


}