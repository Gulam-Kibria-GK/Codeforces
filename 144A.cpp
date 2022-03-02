#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,k,l,n,m,f=1,a=0,b=999999;
    cin>>n;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        cin>>m;
        v.push_back(m);
        a=max(a,m);
        b=min(b,m);
    }
    for(i=0; i<n; i++){
        if(a==v[i] && f==1){
                k=i+1;
                f=0;
        }
        else if(b==v[i]) l=i+1;
    }
    if(k>l)j=-1;
    j+=(k-1);
    j+=(n-l);
    cout<<j<<endl;
    return 0;
}