#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--)
    {
        cin>>n;
        vector<ll>v,v2;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            v2.push_back(a);
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<n;i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        v.clear();
        v2.clear();
    }

}