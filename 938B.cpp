#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,ma=0,mi=0;
    cin>>n;
    int arr[n+2];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=500000)
            ma=arr[i];
        else
        {
            mi=arr[i];
            break;
        }
    }
    int x=ma-1;
    int y=1000000-mi;
    int ans=max(x,y);
    if(mi!=0 && ma!=0)
        cout<<ans<<endl;
    else if(mi==0)
      cout<<x<<endl;
    else if(ma==0)
        cout<<y<<endl;

}