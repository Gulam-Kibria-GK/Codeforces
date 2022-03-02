#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c,d;
    vector<ll>v;
    cin>>k;
    while(k--){
        cin>>n;
        string st;
        cin>>st;
        ll f=0;
        for(i=0;i<n;i++){
            if(st[i]!='t')
                cout<<st[i];
            else
                f++;
        }
        while(f--){
            cout<<'t';
        }
        cout<<endl;
    }
}