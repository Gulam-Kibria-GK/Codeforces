#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    ll t,n,m,i,j,k,c=0,cnt=0,x,y,mn,a,b,d;
    vector<ll>vt;
    vector<ll>::iterator it;
    x = 2;
    n = 0;
    while(n<=2000000000)
    {
        vt.push_back(x*(x-1));
        vt.push_back(x*x);
        n = x*x;
        ++x;
    }
    sort(vt.begin(),vt.end());
 
    cin>>t;
    while(t--)
    {
        cin>>n;
        it = lower_bound(vt.begin(),vt.end(),n);
 
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
            cout<< it-vt.begin()+1 <<endl;
 
    }
 
    return 0;
}