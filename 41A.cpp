#include<stdio.h>
#include<string.h>


int main()
{
    char x[107];
    char y[107];

    scanf("%s",&x);
    scanf("%s",&y);

    strrev(x);

    if(strcmp(x,y)!=1)
    {   
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
        
    }

   return 0;
}