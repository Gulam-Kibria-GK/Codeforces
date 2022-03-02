#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,a,b,c=0;
    cin>>n;
    vector<pair<int,int> >v;
    for(i=0;i<n;i++){
        cin>>m;b=m-i;
        if(b<0)b=0;
        v.push_back({(b%n==0)? b/n:b/n+1,i+1});
    }
    sort(v.begin(),v.end());
    cout<<v[0].second<<endl;
    return 0;
}