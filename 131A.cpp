#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,y=1,z=1,q;
    char st[100];
    char st2[100];
    scanf("%s",st);
    n=strlen(st);
    for(i=1; i<n; i++)
    {
            if((st[0]>='a' && st[0]<='z') && (st[i]>='A' && st[i]<='Z'))
            {
                z++;
            }
            else if((st[0]>='A' && st[0]<='Z') && (st[i]>='A' && st[i]<='Z'))
            {
                y++;
            }
    }
    if(n>1)
    {
        if(n==y)
        {
            for(i=0; i<n; i++)
            {
                st2[i]=st[i]+32;
                printf("%c",st2[i]);
            }
        }
        else if(n==z)
        {
            st2[0]=st[0]-32;
            for(i=1; i<n; i++)
            {

                st2[i]=st[i]+32;
            }
            for(i=0; i<n; i++)
            {
                printf("%c",st2[i]);
            }
        }
        else
        {
            for(i=0; i<n; i++)
            {
                st2[i]=st[i];
                printf("%c",st2[i]);
            }
        }
    }
    else if(n==1)
    {
        if(st[0]>='a' && st[0]<='z')
        {
            st2[0]=st[0]-32;
        }
        else if(st[0]>='A' && st[0]<='Z')
        {
            st2[0]=st[0]+32;
        }
        printf("%c",st2[0]);
    }
printf("\n");
return 0;
}