#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a,b,ma=1,c=1;
    cin>>n;
    long long arr[n+5];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
        if(ma<c)
        {
            ma=c;
        }
        if (arr[i]>=arr[i+1])
        {
            c=1;
        }
    }
    cout<<ma<<endl;
    return 0;
}