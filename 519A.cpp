#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,valu,valu1=0,valu2=0;
    char ar[10][10];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            scanf("%c",&ar[i][j]);
        }
        getchar();
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(ar[i][j]=='q' || ar[i][j]=='r' || ar[i][j]=='b' || ar[i][j]=='n' || ar[i][j]=='p' || ar[i][j]=='k')
            {
                if(ar[i][j]=='q')
                {
                    valu=9;
                }
                else if(ar[i][j]=='r')
                {
                    valu=5;
                }
                else if(ar[i][j]=='b')
                {
                    valu=3;
                }
                else if(ar[i][j]=='n')
                {
                    valu=3;
                }
                else if(ar[i][j]=='p')
                {
                    valu=1;
                }
                else if(ar[i][j]=='k')
                {
                    valu=0;
                }
                valu1=valu1+valu;
            }
            else if(ar[i][j]=='Q' || ar[i][j]=='R' || ar[i][j]=='B' || ar[i][j]=='N' || ar[i][j]=='P' || ar[i][j]=='K')
            {
                 if(ar[i][j]=='Q')
                {
                    valu=9;
                }
                else if(ar[i][j]=='R')
                {
                    valu=5;
                }
                else if(ar[i][j]=='B')
                {
                    valu=3;
                }
                else if(ar[i][j]=='N')
                {
                    valu=3;
                }
                else if(ar[i][j]=='P')
                {
                    valu=1;
                }
                else if(ar[i][j]=='K')
                {
                    valu=0;
                }
                valu2=valu2+valu;
            }
        }
    }
    if(valu1>valu2)
    {
        printf("Black\n");
    }
    else if(valu1<valu2)
    {
        printf("White\n");
    }
    else if(valu1==valu2)
    {
        printf("Draw\n");
    }
    return 0;
}