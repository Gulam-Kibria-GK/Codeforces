#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,x,y=0;
    char st[100];
    char st2[100];
    scanf("%s",st);
    n=strlen(st);
    x=n/2;
    if(n%2!=0)
    {
        for(i=n-1,j=0; i>=x,j<n; i--,j++)
        {
            st2[j]=st[i];
        }
        for(i=0; i<x; i++)
        {
            if( st[i]!=st2[i])
            {
                y++;
            }
        }
        if(y==1 || y==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else if(n%2==0)
    {
        for(i=n-1,j=0; i>=x,j<n; i--,j++)
        {
            st2[j]=st[i];
        }
        for(i=0; i<x; i++)
        {
            if( st[i]!=st2[i])
            {
                y++;
            }
        }
        if(y==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}