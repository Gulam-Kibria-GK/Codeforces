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

map<string,ll>mm;

ll ans(string st)
{
    string s1=st;
    reverse(s1.begin(),s1.end());
    if(s1==st)
        return 1;
    else
        return 0;

}

string ans1(string st)
{
    string s1=st;
    reverse(s1.begin(),s1.end());
    return s1;
}


int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n>>m;
    string st,st1,st2="",stm="";
    vector<string>v,v2;
    for(i=0; i<n; i++)
    {
        cin>>st;
        if(ans(st))
        {
            v2.push_back(st);
        }
        else
        {
            v.push_back(st);
        }
        mm[st]++;

    }
    ll nn=v.size();
    for(i=nn-1; i>=0; i--)
    {
        st1=ans1(v[i]);
        if(mm[st1] && mm[v[i]])
        {
            st2+=st1;
            mm[v[i]]--;
            mm[st1]--;
        }
    }
    ll nn2=v2.size();
    string sa="",sa2="";
    for(i=0;i<nn2;i++){
        ll div=mm[v2[i]]/2;
        mm[v2[i]]%=2;
        for(j=0;j<div;j++){
            sa+=v2[i];
        }
    }
    for(i=0;i<nn2;i++){
        if(mm[v2[i]]){
            sa2=v2[i];
            break;
        }
    }
    string stt=st2;
    stt+=(sa+sa2+ans1(sa));
    stt+=(ans1(st2));
    ll siz=stt.size();
    cout<<siz<<endl;
    cout<<stt<<endl;
}