#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    double div;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    div=(1.0*sum)/n;
    printf("%.12lf\n",div);
    return 0;
}