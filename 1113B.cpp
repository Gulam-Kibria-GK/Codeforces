#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k=999999999,l=0,n,m,a,f=999999999,b;
    cin>>a;
    vector<ll>v;
    for(i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
        l+=b;
    }
    ll kk=l,dd=v[0],jk=1,sum=0;
    sort(v.rbegin(),v.rend());
    for(j=1; j<=100; j++){
        for(i=0; i<a-1; i++){
            l=kk;
            if(v[i]%j==0){
                l-=(v[i]+v[a-1]);
                sum=(j*v[a-1])+(v[i]/j);
                l+=sum;
                if(f>l)f=l;
            }
        }
    }
    cout<<min(f,kk)<<endl;
}