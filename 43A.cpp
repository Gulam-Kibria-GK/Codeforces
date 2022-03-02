#include <bits/stdc++.h>
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

#define pf printf
#define pfi(x) pf("%d",x)
#define pfl(x) pf("%lld",x)
#define pf1(x) pf("%d\n",x)
#define pf2(x,y) pf("%d %d\n",x,y)
#define pf3(x,y,z) pf("%d %d %d\n",x,y,z)
#define pfl1(x) pf("%lld\n",x)
#define pfl2(x,y) pf("%lld %lld\n",x,y)
#define pfl3(x,y,z) pf("%lld %lld %lld\n",x,y,z)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define Yes printf("Yes\n")
#define No printf("No\n")


#define sps(a,n)  cout << setw(a) << n << " in binary is" << setw(a);
//"   5 in binary is  101"//


#define stdf  std::cout << std::fixed;
#define stc1(c,f)    std::cout << std::setprecision(c) << f << '\n';

/**********
int main () {
    int c;
   double f =3.14159;
   stc1(5,f);
   stc1(9,f);//all number count//
   stdf;
   stc1(8,f);//.before count number//
   stc1(10,f);
   return 0;
}
************/

#define pfd(x,k) cout<<fixed<<setprecision(k)<<x;
/*******
int main () {
    int c;
   double f =3.14159;
   pfd(10,f);
   return 0;
}
********/


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

int main(){
    int i,j=0,k,l=0,f=1,n,a,b;
    sf1(n);
    string st;
    vector<string>s;
    map<string,int>m;
    vector<string>v;
    for(i=0;i<n;i++){
        cin>>st;
        s.push_back(st);
        if(m[st]==0){
            v.push_back(st);
            m[st]=1;
        }
    }
    if(v.size()==1)cout<<v[0]<<endl;
    else {
        for(i=0;i<s.size();i++){
            if(v[0]==s[i])j++;
            else l++;
        }
        //cout<<l<<" "<<j<<endl;
        if(j>l)cout<<v[0]<<endl;
        else cout<<v[1]<<endl;
    }
    return 0;
}