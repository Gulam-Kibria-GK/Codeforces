#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,n,x,sum,count;
    int ar[100000];
    cin>>a;
    cin>>b;
    cin>>c;
    for(i=0;i<=b;i++)
    {
        cin>>ar[i];
    }
    count=0;
    for(i=0;i<b;i++)
    {
        n=ar[b]^ar[i];
        //printf("%d\n\n",n);
        sum=0;
        while(n!=0)
        {
            x=n%2;
            n=n/2;
            sum=sum+x;
           // printf("%d\n\n",sum);
        }
        if(sum<=c)
        {
            count++;
            //printf("%d\n\n",count);
        }
    }
   cout<<count<<"\n";
    return 0;
}