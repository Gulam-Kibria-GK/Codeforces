#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod  1000000007
 
 
int main()
{
    //freopen("A.txt","r",stdin);
    //freopen("A.txt","w",stdout);
    ll n;
    cin>>n;
    ll f=n,x=1;
    for(int i=2; i<=sqrt(f); i++)
    {
        int m=0;
        while(n%i==0)
        {
            m=1;
            n=n/i;
        }
        if(m==1)
            x*=i;
    }
    if(f>1)
        x*=n;
    cout<<x<<endl;
}