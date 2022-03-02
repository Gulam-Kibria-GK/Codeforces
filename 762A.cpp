#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main()
{
    long long int i,t,j=-1,x,n;
    cin>>n>>t;
    x=sqrt(n);
    for(i=1; i<=x; i++)
    {
        if(n%i==0)
        {
            j++;
            a[j]=i;
            if(n/i!=i)
            {
                j++;
                a[j]=n/i;
            }
        }
    }
    sort(a,a+(j+1));
    if(t>j+1)
    {
        cout<<"-1"<<endl;
    }
    else
        cout<<a[t-1]<<endl;
    return 0;
}