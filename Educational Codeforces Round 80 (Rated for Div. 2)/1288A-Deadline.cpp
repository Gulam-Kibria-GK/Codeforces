#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,n,m,t;
    cin>>t;
    while(t--)
    {
        ll f=0;
        cin>>n>>m;
        if(n>=m)f=1;
        else if(n==1){
            f=0;
        }
        else{
        ll a=n/2;
        ll b=n-a;
        ll aa=a-1;
        ll bb=b+1;

        ll ans=(m/(a+1));
        if((m%(a+1)!=0)){
            ans++;
        }
        if(ans<=b)f=1;

        ans=(m/(aa+1));
        if((m%(aa+1)!=0)){
            ans++;
        }
        if(ans<=bb)f=1;

        aa=a+1;
        bb=b-1;
        ans=(m/(aa+1));
        if((m%(aa+1)!=0)){
            ans++;
        }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
