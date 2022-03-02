#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,sum=0,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum+=abs(a);
    }
    cout<<sum<<endl;
}