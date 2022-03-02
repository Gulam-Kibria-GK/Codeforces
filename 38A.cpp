#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum=0,mul,a,b,ar[1000];
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
   // mul=b-a;
    //printf("")
    for(j=a-1;j<b-1;j++)
    {
        //printf("%d\t",ar[j]);
        sum=sum+ar[j];
        //printf("%d\t",sum);
    }
    printf("%d\n",sum);
    return 0;
}