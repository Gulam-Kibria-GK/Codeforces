#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll i,j,k,n,m,a,b;
    cin>>j;
    while(j--)
    {
        cin>>n;
        vector<ll>v;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll f=0;
        for(i=0; i<n-1; i++)
        {
            if(1<abs(v[i]-v[i+1]))
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        v.clear();
    }

}
