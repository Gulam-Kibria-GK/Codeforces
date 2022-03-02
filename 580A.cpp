#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,m,i,j,k,c=1;
    cin>>n;
    int a[n+2],b[n+2];
    for(i=0; i<n; i++)
        cin>>a[i];
    b[0] = 1;
    for(i=1; i<n; i++)
    {
        if(a[i-1]<=a[i])
        {
            ++c;
            b[i] = c;
        }
        else
        {
             c = 1;
            b[i] = c;
 
        }
        //cout<<b[i]<<" ";
    }
    sort(b,b+n);
    cout<<b[n-1]<<endl;
 
    return 0;
}