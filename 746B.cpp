#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,valu;
    char st[10000];
    scanf("%d",&n);
    getchar();
    scanf("%s",st);
    getchar();
    if(n%2==1)
    {
        for(i=n-1;i>=0;i--)
        {
            if(i%2==1)
            {
                printf("%c",st[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                printf("%c",st[i]);
            }
        }
    }
    else
    {
        for(i=n-1;i>=0;i--)
        {
            if(i%2==0)
            {
                printf("%c",st[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            if(i%2==1)
            {
                printf("%c",st[i]);
            }
        }
    }
    printf("\n");
    return 0;
}