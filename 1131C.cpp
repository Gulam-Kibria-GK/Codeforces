#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;
list<ll>a1;
list<ll>:: iterator it;

int main()
{
    ll i,j,k,l,n,m,a,b,c=0,f=0;
    cin>>n;
    map<ll,ll>mm;
    for(i=0;i<n;i++){
        cin>>b;
        v.push_back(b);
        mm[b]++;
    }
    sort(v.rbegin(),v.rend());
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        a1.push_front(v[i]);
        else
        a1.push_back(v[i]);

    }
    for(it=a1.begin();it!=a1.end();it++){
        cout<<*it<<" ";
    }
}