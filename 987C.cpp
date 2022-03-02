#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,n,m,c;
    c=1<<30;
    cin>>n;
    ll v1[n],v2[n],v3[n];
   for(int i=0;i<n;i++) cin>>v1[i];
   for(int i=0;i<n;i++) cin>>v2[i];
    for(i=0;i<n;i++){
         v3[i]=1<<30;
        for(j=0;j<i;j++){
           if(v1[j]<v1[i]){v3[i]=min(v3[i],v2[j]);}
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(v1[i]>v1[j])c=min(c,v2[i]+v2[j]+v3[j]);
        }
    }
    if(c==1<<30)cout<<-1<<endl;
    else cout<<c<<endl;
    return 0;
}