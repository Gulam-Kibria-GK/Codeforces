#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int sum=0,f=0;
    for(i=0;i<n-1;i++)
    {
        if(ar[i]==1)
        {
            f=1;
            if(ar[i+1]==0)
                sum+=2;
            else
            {
                sum++;
            }

        }
    }
    if(ar[n-1]==0)
    {
        if(f==1)
        sum--;
    }
    if(ar[n-1]==1)
    {
        if(f==1)
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}