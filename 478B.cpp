#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,a,b,n,n1,x,valu=0,valu1=0,min,n3,n2,max;
    cin>>a>>b;
    n=(a-b)+1;
    max=n*(n-1)/2;

    n1=a/b;
    n2=a%b;

    n3=b-n2;

    for(i=1;i<=n3;i++)
    {
         valu+=(n1*(n1-1)/2);
    }
    for(i=1;i<=n2;i++)
    {
        valu1+=((n1+1)*((n1+1)-1)/2);
    }

    min=valu+valu1;

    cout<<min<<" "<<max<<endl;
    return 0;
}