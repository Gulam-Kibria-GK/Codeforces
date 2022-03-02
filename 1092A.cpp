#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    char chh[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        k=a/b;
        l=a%b;
        ll f=0;
        while(b--)
        {
            for(j=0; j<k; j++)
            {
                cout<<chh[f];
            }
            f++;
        }
        for(j=0;j<l;j++){
            cout<<chh[f-1];
        }
        cout<<endl;
    }
}