#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x;
    char st[100];
    scanf("%d",&n);
    getchar();
    gets(st);
    if(n==8)
    {
        printf("vaporeon\n");
    }
    else if(n==6)
    {
        printf("espeon\n");
    }
    else if(n==7)
    {
        if(st[0]=='j' || st[1]=='0' || st[3]=='t')
        {
            printf("jolteon\n");
        }
        else if(st[0]=='s' || st[1]=='y' || st[3]=='v')
        {
            printf("sylveon\n");
        }
        else if(st[0]=='u' || st[1]=='m' || st[2]=='b')
        {
            printf("umbreon\n");
        }
        else if(st[0]=='l' || st[1]=='e' || st[3]=='f')
        {
            printf("leafeon\n");
        }
        else if((st[0]=='f') || (st[3]=='r' && st[0]=='f') || (st[1]=='l' && st[3]=='r') || (st[2]=='a' && st[3]=='r'))
        {
            printf("flareon\n");
        }
        else
        {
            printf("glaceon\n");
        }
    }
    return 0;
}