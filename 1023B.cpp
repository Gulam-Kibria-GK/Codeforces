#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll i,j,k,l,n,m,a,b;
   cin>>n>>m;
   if(n>=m){
     a=m-1;
     a=a/2;
     cout<<a<<endl;
   }
   else{
      b=m-n;
      if(n+n-1<m){cout<<0<<endl;return 0;}
      b--;
      k=n-b;
      cout<<k/2<<endl;
   }
}