#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char st[1000];
    scanf("%s",st);
    n=strlen(st);
    if(st[0]>='a' && st[0]<='z')
    {
        st[0]=st[0]-32;
    }
    else
    {
        st[0]=st[0];
    }
    printf("%c",st[0]);
    for(i=1;i<n;i++)
    {
       printf("%c",st[i]);
    }
    printf("\n");
    return 0;
}