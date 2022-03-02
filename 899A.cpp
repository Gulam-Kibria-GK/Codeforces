#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,j;
    cin>>n;
    int arr[n+5];
    int a[n+10]= {};
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        a[arr[i]]++;
    }
    int f=0,ma,mi,c=0;
    mi=a[1];
    ma=a[2];
    if(mi>a[2])
    {
        f=1;
        mi=a[2];
        ma=a[1];
    }
    int ans;
    if(f==1)
    {
        ans=(a[1]-mi)/3;
        c+=(mi+ans);
    }
    else
    {
        c+=mi;
    }
    cout<<c<<endl;
    return 0;
}