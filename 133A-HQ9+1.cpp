#include<stdio.h>
#include<string.h>
int main()
{
    int i,a=0,n;
    char st[100];
    scanf("%s",st);
    n=strlen(st);
    for(i=0;i<n;i++)
    {
        if(st[i]=='H' || st[i]=='Q' || st[i]=='9')
        {
            a=1;
        }
    }
    if(a==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
