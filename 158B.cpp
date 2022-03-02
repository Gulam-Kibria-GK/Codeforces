#include<stdio.h>
int main()
{
    int i,n,a=0,b=0,c=0,d=0,valu1,valu2,sum1,sum2,ans,x=0,y=0;
    scanf("%d",&n);
    int arr[n+2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==4)
        {
            a++;
        }
        else if(arr[i]==3)
        {
            b++;
        }
        else if(arr[i]==2)
        {
            c++;
        }
        else if(arr[i]==1)
        {
            d++;
        }
    }
    valu1=(d-b);
    if(valu1>0)
    {
        valu2=valu1;
    }
    else
    {
        valu2=0;
    }

        sum1=(c*2+valu2)/4;
        sum2=(c*2+valu2)%4;
        if(sum2!=0)
        {
            y=1;
        }
        ans=a+sum1+b+y;
        //printf("%d %d %d %d %d",a,valu2,sum1,b,y);
        printf("%d\n",ans);
        return 0;
}