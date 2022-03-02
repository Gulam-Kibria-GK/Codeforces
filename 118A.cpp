#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x;
    char st[100],a;
    char st2[100];
    scanf("%s",st);
    n=strlen(st);
    for(i=0;i<n;i++)
    {
        if(st[i]=='A' || st[i]=='E' || st[i]=='Y' || st[i]=='I' || st[i]=='O' || st[i]=='U'  || st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='y' || st[i]=='u')
        {
            printf("");
        }
        else
        {
            printf(".");
            st2[i]=st[i];
            if(st2[i]>='A' && st2[i]<='Z')
            {
                st2[i]=st2[i]+'a'-'A';
            }
            printf("%c",st2[i]);
        }
    }
    return 0;
}