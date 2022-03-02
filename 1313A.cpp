#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define CASE_PRINT(j)   cout<<"Case "<<j<<": "

int main()
{
    ll i,j,k,n,m,a,b;

    cin>>k;
    while(k--){
        ll c=0;
        ll arr[5];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        n=arr[2];
        m=arr[1];
        a=arr[0];
        if(n>0){
            n--;
            c++;
        }
        if(m>0){
            m--;
            c++;
        }
        if(a>0){
            a--;
            c++;
        }
        if(n>0 && m>0){
            n--;
            m--;
            c++;
        }
        if(n>0 && a>0){
            n--;
            a--;
            c++;
        }
        if(a>0 && m>0){
            a--;
            m--;
            c++;
        }
        if(n>0 && a>0 && m>0){
            n--;
            a--;
            m--;
            c++;
        }
        cout<<c<<endl;
    }
}