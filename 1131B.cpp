#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,c=0,dd=1;
    cin>>n;
    k=0,l=0,c=0;
    while(n--)
    {
        cin>>a>>b;
        ll ff=min(a,b);
         ll ma=max(k,l);
        if(!(k==a && l==b) && ma<=ff){
            ll mi=ff;
            k=a;l=b;
            ll ans=mi-ma;
            //cout<<ma<<" "<<mi<<" "<<ans<<" ";
            if(ans>=0){
                if(a==b)c+=ans,dd=1;
            else{
                dd=0;
                c+=(ans+1);
            }
            }
            //cout<<"C "<<c<<endl;
        }
        else{
            k=a;
            l=b;
        }
    }
    if(dd==1)c++;
    if(c==0)c=1;
    cout<<c<<endl;
}

/*******
10
1 1
2 2
3 3
4 4
5 5
6 6
10 10
15 15
20 21
21 21
******/