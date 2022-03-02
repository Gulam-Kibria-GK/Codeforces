#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k=0,n,m,sum=0;
    cin>>m;
    while(m--)
    {
        k=0,sum=0;
        cin>>n;
        k=(n*(n+1))/2;
        for(i=0; i<=sqrt(n)+1; i++)
        {
            if(powl(2,i)<=n)
            sum+=powl(2,i);
        }
        k=abs(k-sum);
        //cout<<k<<" "<<sum<<endl;
        sum=(-1)*sum;
        cout<<sum+k<<endl;
    }
    return 0;
}