#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,l,n,m,x,y;
    cin>>n;
    string st,st2;
    st2="ACTG";
    cin>>st;
    ll ans=INT_MAX,sum=0,k,k2;
    for(j=0; j<n-3; j++)
    {
        l=0;
        sum=0;
        //cout<<endl;
        for(i=j; i<n; i++)
        {
            if(st2[l]!=st[i])
            {
                //cout<<(('Z'-st[i])+st2[l]-'A')+1<<endl;
                if(st[i]>st2[l])
                {
                    k=('Z'-st[i])+st2[l]-'A'+1;
                    k2=st[i]-st2[l];
                }
                else
                {
                    k=('Z'-st2[l])+st[i]-'A'+1;
                    k2=st2[l]-st[i];
                }
            }
            else k=0,k2=0;
            sum+=min(k,k2);
           // cout<<k<<" "<<k2<<" "<<sum<<endl;
            if(l==3)break;
            l++;
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
}