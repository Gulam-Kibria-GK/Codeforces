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

int main()
{
    int i,j,k,l,n,m,a,b,x1,x2,x3,x4,x5,x6,x7,x8,f1,ans;
    x1=x2=x3=x4=x5=x6=x7=x8=9999999;
    sf1(n);
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    vector<int>v5;
    vector<int>v6;
    vector<int>v7;
    string st;
    vector<pair<int,string> >v;
    for(i=0; i<n; i++)
    {
        cin>>a>>st;
        sort(st.begin(),st.end());
        v.push_back({a,st});
    }
    for(i=0; i<n; i++)
    {
        if(v[i].second=="ABC")
        {
            v1.push_back(v[i].first);
        }
        else if(v[i].second=="AB")
        {
            v2.push_back(v[i].first);
        }
        else if(v[i].second=="AC")
        {
            v3.push_back(v[i].first);
        }
        else if(v[i].second=="BC")
        {
            v4.push_back(v[i].first);
        }
        else if(v[i].second=="A")
        {
            v5.push_back(v[i].first);
        }
        else if(v[i].second=="B")
        {
            v6.push_back(v[i].first);
        }
        else if(v[i].second=="C")
        {
            v7.push_back(v[i].first);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    sort(v4.begin(),v4.end());
    sort(v5.begin(),v5.end());
    sort(v6.begin(),v6.end());
    sort(v7.begin(),v7.end());
    if(v5.size()!=0 && v6.size()!=0 && v7.size()!=0){
        f1=v5[0]+v6[0]+v7[0];
        _min(x1,f1);
    }
    if(v1.size()!=0){
        f1=v1[0];
        _min(x2,f1);
    }if(v2.size()!=0 && v7.size()!=0){
        f1=v2[0]+v7[0];
        _min(x3,f1);
    }
    if(v3.size()!=0 && v6.size()!=0){
        f1=v3[0]+v6[0];
        _min(x4,f1);
    }
    if(v4.size()!=0 && v5.size()!=0){
        f1=v4[0]+v5[0];
        _min(x5,f1);
    }
    if(v2.size()!=0 && v3.size()!=0){
        f1=v2[0]+v3[0];
        _min(x6,f1);
    }
    if(v2.size()!=0 && v4.size()!=0){
        f1=v2[0]+v4[0];
        _min(x7,f1);
    }
    if(v3.size()!=0 && v4.size()!=0){
        f1=v3[0]+v4[0];
        _min(x8,f1);
    }
    ans=min(x1,x2);
    _min(ans,x3);
    _min(ans,x4);
    _min(ans,x5);
    _min(ans,x6);
    _min(ans,x7);
    _min(ans,x8);
    if(ans==9999999){
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;
    return 0;
}