#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define f1 for (int i=0; i<n; i++)
#define pb push_back
#define fs first
#define sd second
#define mkp make_pair
#define Pi acos(-1)
#define IOS ios_base::sync_with_stdio(false);
#define CI cin.tie(0);
#define CO cout.tie(0);

template <class T>  inline void smax(T &x,T y){x = max((x), (y));}
template <class T>  inline void smin(T &x,T y){x = min((x), (y));}


int main()
{
    IOS
    CI
    CO

    ll n,m,k; cin>>n>>m>>k;
    ll a[n];
    f1 cin>>a[i];
    sort(a,a+n);
    ll hi=a[n-1],hl=a[n-2],kk=k+1,ans=0,mm;

    ll tmp=hi*k;
    mm=m/kk;
    tmp+=hl;
    ans+=(tmp*mm);
    ans+=((m%kk)*hi);

    cout<<ans<<endl;
}