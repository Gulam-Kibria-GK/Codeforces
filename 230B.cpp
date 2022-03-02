#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,s,k,ar[1000003];
    for(k=0;k<1000003;k++)
    {
        ar[k]=1;
    }
    for(i=2; i<1000003; i++)
    {
        s=i*2;
        for(j=2; s<1000003; j++)
            {
                ar[s]=0;
                s=i*j;
            }
    }

    int x,n;
    ar[0]=0;
    ar[1]=0;
    //printf("%d",ar[36]);
    scanf("%d",&x);

    long long int ar2[x];

    for(i=0; i<x; i++)
    {
        scanf("%lld",&ar2[i]);
    }

    for(i=0; i<x; i++)
    {
        n=(int)sqrt(ar2[i]);

        if(n-sqrt(ar2[i])==0)
        {

            if(ar[n])
            {
                printf("YES\n");
            }

            else
            {
                printf("NO\n");
            }
        }

        else
        {
            printf("NO\n");
        }
    }

    return 0;
}