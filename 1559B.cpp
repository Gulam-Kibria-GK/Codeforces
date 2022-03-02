#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll slv(string ss,ll n)
{
    ll i,k=0;
    for(i=0; i<n-1; i++)
    {
        if(ss[i]==ss[i+1])
            k++;
    }
    return k;
}

string ss(string st4,ll n)
{
    ll i,ff=0;
    for(i=0; i<n; i++)
    {
        if(st4[i]!='?' && ff==0)
        {
            ff=1;
        }
        if(ff==1 && st4[i]=='?')
        {
            if(st4[i-1]=='R')
            {
                st4[i]='B';
            }
            else if (st4[i-1]=='B')
            {
                st4[i]='R';
            }
        }
    }
    if(st4[n-1]=='?')
    {
        st4[n-1]='R';
    }
    for(i=n-1; i>=0; i--)
    {
        if(st4[i-1]=='?')
        {
            if(st4[i]=='R')
            {
                st4[i-1]='B';
            }
            else if (st4[i]=='B')
            {
                st4[i-1]='R';
            }
        }
    }
    return st4;
}

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--)
    {
        string st="",st4;
        cin>>n>>st4;
        for(i=n-1; i>=0; i--)
        {
            st+=st4[i];
        }

        string st2=ss(st4,n);
        string st3=ss(st,n);

        ll ans1,ans2;
        ans1=slv(st2,n);
        ans2=slv(st3,n);
        if(ans1>ans2)
        {
            for(i=n-1; i>=0; i--)
            {
                cout<<st3[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<st2<<endl;
        }
    }
}