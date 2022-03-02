#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<ll,ll>mm;

int main()
{
    ll i,j,a,b,c,n,m;
    cin>>m;
    while(m--)
    {
        cin>>n;
        ll arr[n+5];
        for(i=1;i<=n;i++){
            cin>>arr[i];
            mm[arr[i]]=i;
        }
        ll ff=0;

        for(i=1;i<=n;i++){
            ll ss=1;
            b=0;
            while(arr[i]*ss<=(n+n-1)){
                a=mm[arr[i]];
                b=(arr[i]*ss)-a;
                ss++;
                if(b<=i)continue;

                if(b>n)break;
               // cout<<a<<" "<<b<<endl;
                c=arr[b];
                //cout<<c<<" "<<arr[a]<<"--"<<a<<" "<<b<<endl;
                if((c*arr[a])==(a+b)){
                    ff++;
                }
            }
        }

        cout<<ff<<endl;

    }
}

/****
8
3 1 5 8 2 4 9 10
*/