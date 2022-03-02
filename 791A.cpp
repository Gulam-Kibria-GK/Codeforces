#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c=0,x,y;
    scanf("%d%d",&a,&b);
    for(i=0; ;i++)
    {
        a=a*3;
        b=b*2;
        c+=1;
        if(a>b)
        {
            break;
        }
    }
    printf("%d\n",c);
    return 0;
}