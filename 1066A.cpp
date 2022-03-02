#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll i,j,k=0,l,n,m,a,b,c,d;
    scanf("%lld",&n);
    while(n--)
    {
        
        k=0;
        cin>>a>>b>>c>>d;
        if(a<b){
            cout<<0<<endl;
            continue;
        }
        k+=((c-1)/b);
        a=(a/b)*b;
        if(a>=d){k+=((a-d)/b);
        if(d%b)k++;
        }
        printf("%lld\n",k);
    }
}