#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,valu,valu1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    valu=abs(arr[0]-arr[1]);
    valu1=abs(arr[n-1]-arr[0]);
    printf("%lld %lld\n",valu,valu1);

    for(i=1;i<n-1;i++)
    {
        valu=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
        valu1=max(abs(arr[n-1]-arr[i]),abs(arr[i]-arr[0]));
        printf("%lld %lld\n",valu,valu1);
    }

    valu=abs(arr[n-1]-arr[n-2]);
    valu1=abs(arr[n-1]-arr[0]);
    printf("%lld %lld\n",valu,valu1);

    return 0;
}