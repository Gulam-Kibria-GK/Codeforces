#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,l=-1,n;
    cin>>n;
    int x=n-2,a[n+5],b,d=1000000,arr[n+5],k=0,v=1;
    for(i=0; i<n; i++)
        cin>>a[i];
    while(x--)
    {
        for(j=0; j<n; j++)
        {
            if(j==k)
                v=2;
            arr[++l]=abs(a[j]-a[j+v]);
            if(v==2)
                j++;
            v=1;
        }
        k++;
        sort(arr,arr+l);
        b=arr[l-1];
        if(b<d)
            d=b;
        arr[n]={};
        l=-1;
    }
    cout<<d<<endl;
    return 0;
}