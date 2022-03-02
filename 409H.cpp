#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n;
    scanf("%d %d",&n,&k);
    int mi=min(n,k);
    int ma=max(n,k);
   for(i=0;i<mi;i++){
        ma++;
   }
   printf("%d\n",ma);
}