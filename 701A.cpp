#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,valu,k,l;
    cin>>n;
    int ar[n+4],ar2[n+4];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        ar2[i]=ar[i];
    }
    sort(ar,ar+n);
    valu=ar[0]+ar[n-1];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar2[i]+ar2[j]==valu)
            {
                k=i+1;
                l=j+1;
                cout<<k<<" "<<l<<endl;
                ar2[i]=0;
                ar2[j]=0;
                break;
            }
        }
    }
    return 0;
}