#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a+3];
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+a);
    int sum=0;
    for(int i=0; i<b; i++)
    {
        if(arr[i]<=0)
        {
            sum=sum+arr[i];
        }

    }
    printf("%d\n",-1*sum);
    return 0;
}