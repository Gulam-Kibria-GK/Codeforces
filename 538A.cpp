#include <bits/stdc++.h>
using namespace std;

#
#define _max(aa, bb) (aa = max(aa, bb))
#define max2(aa, bb) max(aa, bb)
#define max3(aa, bb, cc) max(aa, max(bb, cc))
#define max4(aa, bb, cc, fk) max(max(aa, fk), max(bb, cc))
#define _min(aa, bb) (aa = min(aa, bb))
#
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



int main()
{
    int i,j=0,k,l,n,m,a,b,c=0;
    string st,st3="",st4="",st6,st5,st2="CODEFORCES";
    cin>>st;
    n=st.size();
    st5=st;
    st6=st2;
    if(n<10){cout<<"NO"<<endl;
    return 0;}
    for(i=0; i<10; i++)
        st3+=st[i];
    if(st3==st2){
        cout<<"YES"<<endl;
        return 0;
    }
    reverse(st.begin(),st.end());
    reverse(st2.begin(),st2.end());
    for(i=0; i<10; i++)
        st4+=st[i];
    if(st4==st2){
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<n;i++){
        if(st5[i]!=st6[i])break;
    }
    st3="";
    for(j=i;j<10;j++)st3+=st6[j];
    reverse(st5.begin(),st5.end());
    reverse(st3.begin(),st3.end());
    for(i=0;i<st3.size();i++){
        if(st5[i]!=st3[i])
            {cout<<"NO"<<endl;
    return 0;}
    }
    cout<<"YES"<<endl;
        return 0;
}