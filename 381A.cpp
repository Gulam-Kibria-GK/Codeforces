#include<bits/stdc++.h>

using namespace std;

int arr[10010];
int main()
{
    int n;
    cin>>n;
    int num[2]={0};
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,sum1=0,p=0,c=n-1;
    for(int i=0; i<n; i++)
    {
        if(arr[p]<arr[c])
        {
            num[i%2]+=arr[c--];
        }
        else
        {
            num[i%2]+=arr[p++];
        }

    }
    printf("%d %d\n",num[0],num[1]);
}