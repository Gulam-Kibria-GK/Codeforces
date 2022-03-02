#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        vector<ll>v;
        ll f=0,sum=0;
        for(i=0; i<a; i++)
        {
            cin>>k;
            if(k%b==0)
                f++;
            v.push_back(k);
            sum+=k;
        }
        if(f==a)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(sum%b)
            {
                cout<<a<<endl;
            }
            else
            {
                ll s=0,e=0,mi;
                ll sum2=sum;
                for(i=0; i<a; i++)
                {
                    sum-=v[i];
                    s++;
                    if(sum%b)
                        break;
                }
                sum=sum2;
                for(i=a-1; i>=0; i--)
                {
                    sum-=v[i];
                    e++;
                    if(sum%b)
                        break;
                }
                mi=min(s,e);
                cout<<(a-mi)<<endl;
            }
        }
        v.clear();
    }
}