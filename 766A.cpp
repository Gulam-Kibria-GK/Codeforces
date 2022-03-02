#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x,y=0,z=-1;
    char st[100007];
    char st2[100007];
    scanf("%s",st);
    getchar();
    scanf("%s",st2);
    getchar();
    n=strlen(st);
    x=strlen(st2);
    if(n>x)
    {
        printf("%d\n",n);
    }
    else if(x>n)
    {
        printf("%d\n",x);
    }
    else if(x==n)
    {
        for(i=0;i<n;i++)
        {
            if(st[i]==st2[i])
            {
                y++;
            }
        }
        if(n==y)
        {
            printf("%d\n",z);
        }
        else
        {
            printf("%d\n",n);
        }
    }
    return 0;
}