#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,k=0,a,q,j,ar[1000006],sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
        for(j=k;j<=sum;j++)
        {
            ar[j]=i;
            //printf("ar[%d]=%d\t",j,ar[j]);
        }
        k=sum+1;;
        //printf("%d\t",k);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&q);
        printf("%d\n",ar[q]);
    }
    return 0;
}