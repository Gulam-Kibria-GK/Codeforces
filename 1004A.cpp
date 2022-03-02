#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz size()
#define sf scanf
#define sfl1(a) sf("%lld",&a)
#define sfl2(a,b) sf("%lld %lld",&a,&b)
#define sfl3(a,b,c) sf("%lld %lld %lld",&a,&b,&c)

int main()
{
    ll sum=2, i,j,l,n,m,a,b;
    sfl2(a,b);
    ll arr[a+5];
    for(i=0; i<a; i++)
        sfl1(arr[i]);
    sort(arr,arr+a);
    for(i=0; i<a-1; i++){
        if(abs(arr[i+1]-arr[i])/b>=2){sum++;
            if((abs(arr[i+1]-arr[i])>b*2))sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}