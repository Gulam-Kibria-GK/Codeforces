#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    char a[]="++X",b[]="X++",c[]="--X",d[]="X--";
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        gets(st);

        if(st[1]==a[1])
        {
            sum=sum+1;
        }
        else if(st[1]==b[1])
        {
            sum=sum+1;
        }
        else if(st[1]==c[1])
        {
            sum=sum-1;
        }
        else if(st[1]==d[1])
        {
            sum=sum-1;
        }
    }
    printf("%d\n",sum);
}