#include<bits/stdc++.h>
using namespace std;
int ar2[1000008],ar[1000009];
int main()
{
    long long int k=-1,h=0,sum=0,sum2=0,valu,i,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    for(i=0; i<n; i++)
    {
        if(ar[i]%2==0)
        {
            sum+=ar[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(ar[i]%2==1)
        {
            //h++;
            k++;
            ar2[k]=ar[i];
        }
    }
    if((k+1)%2==0)
    {
        valu=k;
    }
    else if((k+1)%2==1)
    {
        valu=k-1;
    }
    for(i=0; i<=valu; i++)
    {
        sum2+=ar2[i];
    }
    cout<<sum+sum2<<endl;
    return 0;
}