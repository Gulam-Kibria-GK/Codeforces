#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,valu,valu1,ar[1000000];
    float j=0,j1=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=0;i<n;i++)
    {
        if(ar[n-1]==ar[i])
        {
            j+=1;
        }
        else if(ar[0]==ar[i])
        {
            j1+=1;
        }
    }
    if(ar[n-1]==ar[0])
    {
        j=(float)n/2;
        j1=n-1;

    }
    valu=ar[n-1]-ar[0];
    valu1=j*j1;
    cout<<valu<<" "<<valu1<<"\n";
    return 0;
}