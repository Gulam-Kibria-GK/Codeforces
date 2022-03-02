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
    ll i,j,k,l,n,m,mm,a,b;

    cin>>n;
    if(n&1)
    {

        a=n/2;
        b=n/2+1;
        if(a%10==0)
        {
            a-=1;
            b+=1;
        }
        else if(b%10==0)
        {
            a+=1;
            b-=1;
        }
    }
    else
    {

        a=n/2;
        b=n/2;
        if(a%10==0)
        {
            a=a-1;
            b=b+1;
        }
        else if(b%10==0)
        {
            a=a+1;
            b=b-1;
        }

    }
    if(n>=1 && 9>=n){cout<<n<<endl;return 0;}
    string st5;
    stringstream sss;
    sss<<n;
    st5=sss.str();
    ll u=st5.size();
    ll dd=9,dd2;
    for(i=1;i<u-1;i++){
        dd=(dd*10)+9;
    }
    dd2=n-dd;
    string stt,stt2,stt3="";
    stringstream sst,ss1t;
    sst<<dd;
    stt=sst.str();
    ss1t<<dd2;
    stt2=ss1t.str();
    int ff=0;
    stt3+=(stt+stt2);
    m=stt3.size();
    for(i=0; i<m; i++)
    {
        ff+=stt3[i]-48;
    }
    string st,st2,st3="";
    stringstream ss,ss1;
    ss<<a;
    st=ss.str();
    ss1<<b;
    st2=ss1.str();
    int f=0;
    st3+=(st+st2);
    m=st3.size();
    for(i=0; i<m; i++)
    {
        f+=st3[i]-48;
    }
    cout<<max(f,ff)<<endl;
    return 0;
}