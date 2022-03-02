#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x=0,y=0;
    scanf("%d",&n);
    getchar();
    char st[100000];
     scanf("%s",st);

    for(i=0;i<n;i++)
    {
       if(st[i]=='A')
       {
          x=x+1;
       }
       else if(st[i]=='D')
       {
            y=y+1;
       }
    }

if(x>y)
    {
        printf("Anton\n");
    }
    else if(x<y)
    {
        printf("Danik\n");
    }
    else if(x==y)
    {
        printf("Friendship\n");
    }
    return 0;
}