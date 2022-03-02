#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v[10000];

int main()
{
    ll n,i,j;
    cin>>n;
    for(i=0;i<=n*n;i++){
        v[i%n].push_back(i+1);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j%2)
                cout<<v[n-i-1][j]<<" ";
            else
                cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}