#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>k;
    while(k--)
    {
        cin>>n;
        vector<ll>v,v2;
        ll ff=0;
        for(i=0; i<n; i++)
        {
            cin>>m;
            v.push_back(m);
        }
        for(i=n-1;i>0;i--){
            if(v[i]<=v[i-1]){
                ff++;
            }
            else break;
        }
        for( ; i>0;i--){
            if(v[i]>=v[i-1]){
                ff++;
            }
            else break;
        }
        cout<<i<<endl;
        v.clear();
    }
}