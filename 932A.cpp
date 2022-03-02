#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[10000];
    scanf("%s",st);
    string s=st;
    reverse(s.begin(),s.end());
    if(s==st)
        printf("%s\n",st);
    else
    {
        int x=strlen(st);
        printf("%s",st);
        for(int j=0;j<x-1;j++)
        {
            printf("%c",st[x-1-j-1]);
        }
        printf("\n");
    }
    return 0;
}