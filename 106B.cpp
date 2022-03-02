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

bool myfun(const pair<int,pair<int,pair<int,int> > > &a,
           const pair<int,pair<int,pair<int,int> > > &b)
{
    if(a.first==b.first)
    {
        if(a.second.first==b.second.first)
        {
            if(a.second.second.first==b.second.second.first)
            {
                return a.second.second.second>b.second.second.second;
            }
            else return a.second.second.first>b.second.second.first;
        }
        else return a.second.first>b.second.first;
    }
    else return a.first>b.first;
}
bool myfun2(const pair<int,pair<int,pair<int,int> > > &a,
            const pair<int,pair<int,pair<int,int> > > &b)
{
    return a.second.second.second<b.second.second.second;
}

int main()
{
    int i,j,k,l,n,m,s,r,h,c;
    sf1(n);
    vector<pair<int,pair<int,pair<int,int> > > >v;
    vector<pair<int,pair<int,pair<int,int> > > >v2;
    vector<pair<int,pair<int,pair<int,int> > > >v3;
    while(n--)
    {
        sf4(s,r,h,c);
        //if((1000<=s && s<=4200) && (256<=r && r<=4096) && (1<=h && h<=500) && (100<=c && c<=1000))
        v.push_back({s,{r,{h,c}}});
    }
    v2=v;
    k=v.size();
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            if((v[i].first>v[j].first) && (v[i].second.second.first>v[j].second.second.first) && (v[i].second.first>v[j].second.first) && (v[i].second.second.second>v[j].second.second.second))
            {
                v[j].second.second.second=100000;
            }
        }
    }
    sort(v.begin(),v.end(),myfun2);
    for(i=0; i<v.size(); i++)
    {
        if((v[0].first==v2[i].first) && (v[0].second.second.first==v2[i].second.second.first) && (v[0].second.first==v2[i].second.first) && (v[0].second.second.second==v2[i].second.second.second))
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

}