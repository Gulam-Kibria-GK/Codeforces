#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;

solve()
{
    ll i=0,j,k,l,n=1,m;
    while(n<=10000000000)
    {
        v.push_back(n);
        i++;
        n=powl(2,i);
    }
}
ll find1(ll x)
{
    ll i,j,k=1;
    for(i=0; i<v.size(); i++)
    {
        if(x<v[i])return k;
        k=v[i];
    }
    return 1;
}

int main()
{
    solve();
    ll i,j,k,l,n,m,a,b,fl=0;
    cin>>n>>k;
    a=n;b=k;
    ll ans=n;
    vector<ll>v2;
    while(true)
    {
        if(n<k || n<1 || k<1)break;
        ll va=find1(a);
        if(n-va>=k-1)
        {
            n-=va;
            k--;
            v2.push_back(va);
        }
        else
        {
            a=va-1;
        }
    }
    if(v2.size()==b){
            ll ff=0;
        for(i=0;i<v2.size();i++){
            ff+=v2[i];
        }
        if(ff==ans){
            cout<<"YES"<<endl;
            sort(v2.begin(),v2.end());
            for(i=0;i<v2.size();i++){
                cout<<v2[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }

}