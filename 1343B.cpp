#include<bits/stdc++.h>
#define f1 for (int i = 1; i<=t; i++)
#define f2 for (int j = 0; j<n; j++)
#define f3 for (int k = 0; k<m; k++)
#define ull unsigned long long
#define ll long long
 
using namespace std;
 
vector<ll>v;
 
int main()
{
    int t;
    cin>>t;
 
    ll n;
    ll cnt,cn2;
 
    f1
    {
        cin>>n;
        if((n/2)%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cnt = 0;
            cn2 = 0;
            for(int j = 2; j<=n; j+=2)
            {
                cout<<j<<" ";
                cnt+=j;
            }
            for(int j = 1; j<n-2; j+=2)
            {
                cout<<j<<" ";
                cn2+=j;
            }
 
            cout<<cnt-cn2<<endl;
        }
    }
    //cout<<"Case "<<i<<": "<<m<<endl;
}