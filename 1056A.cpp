#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
map<ll,ll>mm;
int main()
{
    ll i,j,n,m,a,b;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>m;
        for(j=0; j<m; j++){
            cin>>a;
            mm[a]++;
        }
    }
    for(i=1; i<200; i++)
        if(mm[i]==n)cout<<i<<endl;
}