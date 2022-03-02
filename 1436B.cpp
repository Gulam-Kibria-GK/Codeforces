#include <bits/stdc++.h>
using namespace std;
 
#define ios             ios_base::sync_with_stdio(0);
#define YES             cout<<"YES"<<endl
#define NO              cout<<"NO"<<endl
#define sin(s)	        getline(cin,s)
#define ll              long long
#define ull             unsigned long long
#define dd              double
#define min4(a,b,c,d)   min(min(a,b),min(c,d))
#define max4(a,b,c,d)   max(max(a,b),max(c,d))
 
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+2][n+2];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                ar[i][j]=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            ar[i][i]=ar[i][i+1]=1;
        }
        ar[n-1][0]=1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}