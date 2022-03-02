#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,a,k,x,sum=0,f=0,sum2=0;
    char ar[10000];
    scanf("%d",&a);
    x=a/2;
    getchar();
    for(i=0;i<a;i++)
    {
        scanf("%c",&ar[i]);
        ar[i]=(ar[i]-48);
        if(ar[i]==4 || ar[i]==7)
        {
            f=f+1;
        }
    }
    getchar();
    //printf("%d",f);
    if(f==a)
    {
    for(j=0;j<x;j++)
    {
        sum=sum+ar[j];
       // printf("%d\n",sum);
    }
    //printf("\n\n");
    for(k=j;k<a;k++)
    {
        sum2=sum2+ar[k];
        //printf("%d\n",sum2);
    }

    if(sum==sum2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}