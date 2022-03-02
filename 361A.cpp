#include<stdio.h>
int main()
{
    int i,j,n,x,k=0;
    scanf("%d%d",&n,&x);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                printf("%d ",x);
            }
            else
            {
                printf("%d ",k);
            }
        }
        printf("\n");
    }
    return 0;
}