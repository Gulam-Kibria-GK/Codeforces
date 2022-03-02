#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i,c=0;
    cin>> n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-2;i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            printf("YES\n");
            c++;
            break;
        }
    }
    if(c==0)
         printf("NO\n");
}