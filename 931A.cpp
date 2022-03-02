#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a,b;
    cin>>a>>b;
    n=abs(a-b);
    int x=n;
    int sum=0;
    if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        n=(n/2)+1;
    }
    x=x-n;
    for(i=1; i<=n; i++)
    {
        //if(i%3!=0)
            sum+=i;

    }
    for(i=1; i<=x; i++)
    {
        //if(i%3!=0)
            sum+=i;

    }
    cout<<sum<<endl;
    return 0;
}