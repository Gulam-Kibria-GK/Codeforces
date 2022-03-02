#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,l,n,m,a,b,ma=0,in,ans,k=0,xx=0;
    cin>>n;
    vector<ll>v,v2;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        ma=max(ma,a);
    }
    for(i=0; i<n-1;i++)
    {
        if(v[i]>=v[i+1])
        {
            v2.push_back(i);
        }
        else if(ma==v[i]){
            v2.push_back(i);
        }
    }
    v2.push_back(n-1);
    reverse(v2.begin(),v2.end());
    ll siz=v2.size(),valu=0;
    for(i=0; i<siz; i++)
    {
         ans=0;
         ll f;
        f=v[v2[i]];
        ans=f;
        ll ff=f;
        if(v2[i]==0)ans=f;
        else
        {
            if(f==ma)xx=1;
            for(j=v2[i]-1; j>=0; j--)
            {
                if(f>v[j])
                {
                    ans+=v[j];
                    f=v[j];
                }
                else if((f-1)!=0){
                    ans+=(f-1);
                    f=f-1;
                }
                else {
                    if(xx==1){
                            if(((ff*(ff+1))/2)==ans)
                            goto ses;
                    }
                    else break;
                }
            }
        }
        valu=max(valu,ans);
    }
    ses:
        valu=max(valu,ans);
    cout<<valu<<endl;
}