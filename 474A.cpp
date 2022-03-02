#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    char ar[103],ch;
    scanf("%c",&ch);
    getchar();
    scanf("%s",ar);
    n=strlen(ar);
    for(i=0; i<n; i++)
    {
        if(ch=='R')
        {
            if(ar[i]=='w')
            {
                ar[i]='q';
            }
            else if(ar[i]=='e')
            {
                ar[i]='w';
            }
            else if(ar[i]=='r')
            {
                ar[i]='e';
            }
            else if(ar[i]=='t')
            {
                ar[i]='r';
            }
            else if(ar[i]=='y')
            {
                ar[i]='t';
            }
            else if(ar[i]=='u')
            {
                ar[i]='y';
            }
            else if(ar[i]=='i')
            {
                ar[i]='u';
            }
            else if(ar[i]=='o')
            {
                ar[i]='i';
            }
            else if(ar[i]=='p')
            {
                ar[i]='o';
            }
            else if(ar[i]=='s')
            {
                ar[i]='a';
            }
            else if(ar[i]=='d')
            {
                ar[i]='s';
            }
            else if(ar[i]=='f')
            {
                ar[i]='d';
            }
            else if(ar[i]=='g')
            {
                ar[i]='f';
            }
            else if(ar[i]=='h')
            {
                ar[i]='g';
            }
            else if(ar[i]=='j')
            {
                ar[i]='h';
            }
            else if(ar[i]=='k')
            {
                ar[i]='j';
            }
            else if(ar[i]=='l')
            {
                ar[i]='k';
            }
            else if(ar[i]==';')
            {
                ar[i]='l';
            }
            else if(ar[i]=='x')
            {
                ar[i]='z';
            }
            else if(ar[i]=='c')
            {
                ar[i]='x';
            }
            else if(ar[i]=='v')
            {
                ar[i]='c';
            }
            else if(ar[i]=='b')
            {
                ar[i]='v';
            }
            else if(ar[i]=='n')
            {
                ar[i]='b';
            }
            else if(ar[i]=='m')
            {
                ar[i]='n';
            }
            else if(ar[i]==',')
            {
                ar[i]='m';
            }
            else if(ar[i]=='.')
            {
                ar[i]=',';
            }
            else if(ar[i]=='/')
            {
                ar[i]='.';
            }
        }
        else if(ch=='L')
        {
            if(ar[i]=='o')
            {
                ar[i]='p';
            }
            else if(ar[i]=='i')
            {
                ar[i]='o';
            }
            else if(ar[i]=='u')
            {
                ar[i]='i';
            }
            else if(ar[i]=='y')
            {
                ar[i]='u';
            }
            else if(ar[i]=='t')
            {
                ar[i]='y';
            }
            else if(ar[i]=='r')
            {
                ar[i]='t';
            }
            else if(ar[i]=='e')
            {
                ar[i]='r';
            }
            else if(ar[i]=='w')
            {
                ar[i]='e';
            }
            else if(ar[i]=='q')
            {
                ar[i]='w';
            }
            else if(ar[i]=='l')
            {
                ar[i]=';';
            }
            else if(ar[i]=='k')
            {
                ar[i]='l';
            }
            else if(ar[i]=='j')
            {
                ar[i]='k';
            }
            else if(ar[i]=='h')
            {
                ar[i]='j';
            }
            else if(ar[i]=='g')
            {
                ar[i]='h';
            }
            else if(ar[i]=='f')
            {
                ar[i]='g';
            }
            else if(ar[i]=='d')
            {
                ar[i]='f';
            }
            else if(ar[i]=='s')
            {
                ar[i]='d';
            }
            else if(ar[i]=='a')
            {
                ar[i]='s';
            }
            else if(ar[i]=='.')
            {
                ar[i]='/';
            }
            else if(ar[i]==',')
            {
                ar[i]='.';
            }
            else if(ar[i]=='m')
            {
                ar[i]=',';
            }
            else if(ar[i]=='n')
            {
                ar[i]='m';
            }
            else if(ar[i]=='b')
            {
                ar[i]='n';
            }
            else if(ar[i]=='v')
            {
                ar[i]='b';
            }
            else if(ar[i]=='c')
            {
                ar[i]='v';
            }
            else if(ar[i]=='x')
            {
                ar[i]='c';
            }
            else if(ar[i]=='z')
            {
                ar[i]='x';
            }
        }
        printf("%c",ar[i]);
    }
    printf("\n");
    return 0;
}