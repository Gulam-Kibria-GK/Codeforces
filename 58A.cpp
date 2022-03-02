#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b,c,d,e,f,g,h,x=0,y=0,z=0,r=0,s=0,n,sum;
    char st[100];
    scanf("%s",st);
    n=strlen(st);
    for(i=0; i<n; i++)
    {
        if(st[i]=='h')
        {
            a=i;
            if(x==1)
            {
                break;
            }
            b=a;
            x=1;
        }
    }
    for(i=b; i<n; i++)
    {
        if(st[i]=='e')
        {
            c=i;
            if(y==1)
            {
                break;
            }
            d=c;
            y=1;
        }
    }
    for(i=d; i<n; i++)
    {
        if(st[i]=='l')
        {
            e=i;
            if(z==1)
            {
                break;
            }
            f=e;
            z=1;
        }
    }
    for(i=f+1; i<n; i++)
    {
        if(st[i]=='l')
        {
            g=i;
            if(r==1)
            {
                break;
            }
            h=g;
            r=1;
        }
    }
    for(i=h; i<n; i++)
    {
        if(st[i]=='o')
        {
            j=i;
            s=1;
        }
    }
    sum=x+y+z+r+s;
    if(sum==5)
    {
        if((j>h && h>f) && (f>d && d>b))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
    return 0;
}