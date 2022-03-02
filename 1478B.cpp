#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll i,j,k,n,m,a,b;
    cin>>k;

    while(k--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a>=m*10)
            {
                cout<<"YES"<<endl;
            }
            else
            {

                ll f=0;
                while(a>0)
                {
                    ll val=a;
                    while(val)
                    {
                        if(val%10==m)
                        {
                            f=1;
                            break;
                        }
                        val/=10;
                    }
                    if(f)
                    {
                        break;
                    }
                    a-=m;
                }
                if(f)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

    }
}