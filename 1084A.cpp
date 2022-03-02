#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
int main()
{
    ll i,j,k,l,n,m,a,b,mi=1<<29;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<n; i++)
    {
        ll sum=0;
        for(j=0; j<n; j++)
        {
            sum+=(v[j]*(2*(abs(j-i)+j+i)));
        }
        mi=min(sum,mi);
    }
    cout<<mi<<endl;
}