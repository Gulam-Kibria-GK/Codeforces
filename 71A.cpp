#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,x;
    char st[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",st);
        getchar();
        x=strlen(st);
        if(x<=10)
        {
            for(j=0;j<x;j++)
            {
            printf("%c",st[j]);
            }
             printf("\n");
        }

        else if(x>10)
        {
            printf("%c%d%c\n",st[0],x-2,st[x-1]);
        }
    }
    return 0;
}