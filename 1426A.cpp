#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    ll t,n,m,i,j,k,c=0,cnt=0,x,y,mn;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n<=2)
        {
            cout<<1<<endl;
            continue;
        }
 
        i = 1;
        k = 2;
        y = 3;
        while(1)
        {
            //cout<<y+1<<" ";
            y = (x*i) + 2;
            //cout<<x<<endl;
            if(n<=y)
            {
                k = i+1;
                break;
            }
            ++i;
        }
        cout<<k<<endl;
 
    }
 
    return 0;
}