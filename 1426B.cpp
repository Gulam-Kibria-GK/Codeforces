#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    ll t,n,m,i,j,k,c=0,cnt=0,x,y,mn,a,b,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x = 0,y = 0;
        while(n--)
        {
            cin>>a>>b>>c>>d;
            if(a==d && b==c)
            {
                x = 1;
            }
            else if(b==c)
            {
                y = 1;
            }
        }
        if(m%2==1)
        {
            cout<<"NO"<<endl;
        }
        else if(m==2 && (y==1 || x==1) )
            cout<<"YES"<<endl;
        else if(x==1 || y==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
 
    return 0;
}