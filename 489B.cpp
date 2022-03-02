#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,value=-1,s=0,ar[1000],ar2[10000],ar3[1000]= {};
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>ar2[i];
    }
    sort(ar,ar+n,greater<int>());
    sort(ar2,ar2+x,greater<int>());
    for(i=0; i<n; i++)
    {
        for(j=0; j<x; j++)
        {
            if(abs(ar[i]-ar2[j])==1 && !ar3[j])
            {
                s+=1;
                ar3[j]=1;
                break;
            }
            else if(ar[i]==ar2[j] && !ar3[j])
            {
                s+=1;
                ar3[j]=1;
                break;
            }
        }

    }
    cout<<s<<"\n";
    return 0;
}