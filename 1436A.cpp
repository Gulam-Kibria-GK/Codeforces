#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define YES             cout<<"YES"<<endl
#define NO              cout<<"NO"<<endl
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ar[n+2];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum==m)
            YES;
        else
            NO;
    }
}