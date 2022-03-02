#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t,n,k,i,j,x;
    cin>>t;
    while(t--)
    {
        x = 0;
        ll sz = 0;
        ll mov=0;
        cin>>n;
        vector<ll>vt(n,0);
        vector<ll>::iterator it;
        ll alice=0,bob=0,sm=0,sm2=0,c=1,ap=0,bp=0;
        for(i=0; i<n; i++)
            cin>>vt[i];
        sz = n;
        while(1)
        {
            if(sz<=0)
                break;
            if(c%2==1)
            {
                ++mov;
                ++c;
                ap = 0;
                //cout<<"ALICE : ";
                while(1)
                {
                    if(sz>0)
                    {
                        alice+=vt[x];
                        //cout<<vt[x]<<" ";
                        ap+=vt[x];
                        ++x;
                        --sz;
                    }
                    else
                        break;
                    if(ap>bp)
                        break;
                }
                //cout<<endl;
            }
            else
            {
                //cout<<"BOB : ";
                ++mov;
                ++c;
                bp = 0;
                while(1)
                {
                    if(sz>0)
                    {
                        bp+=vt[n-1];
                        //cout<<vt[n-1]<<" ";
                        bob+=vt[n-1];
                        --n;
                        --sz;
                    }
                    else
                        break;
                    if(bp>ap)
                        break;
                }
                //cout<<endl;
            }
        }
        cout<<mov<<" "<<alice<<" "<<bob<<endl;
 
    }
}