#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        ll ma=max(a,b);
        a=min(a,b);
        b=ma;
        ll x=1,y=1;
        ll temp,cnt=0;
        while(true){
            cnt++;
            if((x*a+y*b)>c)break;
            temp=y;
            y=x+y;
            x=temp;
        }
        cout<<cnt<<endl;
    }
}