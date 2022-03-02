#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x=0,y=0;
    char st[100];
    scanf("%s",st);
    n=strlen(st);
    for(i=0;i<n;i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            x++;
        }
        else if(st[i]>='a' && st[i]<='z')
        {
            y++;
        }
    }
    if(x>y)
    {
        for(i=0;i<n;i++)
        {
            if(st[i]>='a' && st[i]<='z')
            {
                st[i]=st[i]-32;
            }
            else
            {
                st[i]=st[i];
            }
            printf("%c",st[i]);
        }
    }
     else if(x<=y)
    {
        for(i=0;i<n;i++)
        {
            if(st[i]>='A' && st[i]<='Z')
            {
                st[i]=st[i]+32;
            }
            else
            {
                st[i]=st[i];
            }
            printf("%c",st[i]);
        }
    }
    printf("\n");
    return 0;
}