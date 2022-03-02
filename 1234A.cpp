#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    //freopen("output.txt","w",stdout);
    ll n,i,j,x,y,t,q,k,c=0,cnt=0,te=0,sm=0;
    cin>>q;
    while(q--)
    {
        sm = 0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>c;
            sm+=c;
        }
        c = ceil(sm/(n*1.0));
        cout<<c<<endl;
    }

    return 0;
}