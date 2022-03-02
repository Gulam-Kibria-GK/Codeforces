#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,b,n,max;
    long long valu,valu2=0;
    int a[1000003];
    scanf("%d",&n);
    //getchar();
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //getchar();
        //a[i]=a[i]-48;
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
         if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {

        valu=max-a[i];
        valu2=valu2+valu;
    }
    printf("%d\n",valu2);
    return 0;
}