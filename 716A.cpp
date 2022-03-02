#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k=1,valu;
    long long x;
    scanf("%d%lld",&n,&x);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       valu=a[i+1]-a[i];
       if(valu<=x)
       {
           k+=1;
       }
       else if(valu>x)
       {
           k=1;
       }
   }
   printf("%d\n",k);
   return 0;
}