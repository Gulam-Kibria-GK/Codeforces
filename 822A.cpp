#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=1,l,n,m;
    cin>>n>>m;
    for(i=1;i<=min(n,m);i++)k*=i;
    cout<<k<<endl;
    return 0;
}