#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mi=2<<29;

int main()
{
    ll i,j,k,l,n,m,a,b;
    string st,st2;
    cin>>st;
    st2=st;
    n=st.size();

    for(i=0; i<n; i++)
    {
        if(st[i]=='0' || st[i]=='8')
        {
            cout<<"YES"<<endl;
            cout<<st[i]<<endl;
            return 0;
        }
    }

    for( i=0;i<n-1;i++)
    {
        for( j=i+1;j<n;j++)
        {
            ll  x=((st[i]-48)*10)+(st[j]-48);
            if(x%8==0){cout<<"YES"<<endl;cout<<x<<endl;return 0;}
        }
    }
    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            for(k=j+1; k<n; k++)
            {
                //cout<<(st[i]-48)<<" "<<(st[j]-48)<<" "<<(st[k]-48)<<endl;
                ll kk=(((st[i]-48)*100)+((st[j]-48)*10)+((st[k]-48)));
                //cout<<kk<<endl;
                if(kk%8==0)
                {
                    cout<<"YES"<<endl;
                    cout<<kk<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}