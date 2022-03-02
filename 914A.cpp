#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,n,c,ma=-10000000;
    cin>>n;
    int arr[n+4];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    float a,b;
    for(i=0;i<n;i++)
    {

        if(arr[i]>0)
        {
            a=sqrt(arr[i]);
            c=sqrt(arr[i]);
            if(a==c)
            {

            }
            else
            {
                if(ma<arr[i])
                ma=arr[i];
            }
        }
        else if(arr[i]<0)
        {
            if(ma<arr[i])
                ma=arr[i];
        }
    }
    cout<<ma<<endl;
}