#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,f;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    if(ar[n-1]==1)
    {
        f=-1;
        cout<<f<<endl;
    }
    else if (ar[n-1]!=1)
    {
        f=1;
        cout<<f<<endl;
    }
    return 0;
}