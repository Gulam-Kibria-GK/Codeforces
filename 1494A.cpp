#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll solve(string st,ll n)
{
    ll i,j,k;
    ll p=0;

    for(i=0; i<n; i++)
    {
        if(st[i]=='(')
        {
            p++;
        }
        else if(st[i]==')')
        {
            if(p>0)
            {
                p--;
            }
            else
            {
                return 0;
            }
        }
    }
    if(p==0)
        return 1;
    return 0;

}


int main()
{
    ll i,j,k,n,m;

    cin>>m;
    while(m--)
    {
        string st2,st;
        cin>>st2;
        st=st2;
        n=st2.size();
        char a,b,c;
        int a1=0,b1=0;
        a=st2[0];
        for(i=1; i<n; i++)
        {
            if(st2[i]!=a)
            {
                b=st2[i];
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            if(st2[i]==a)
            {
                st[i]='(';
                a1++;
            }
            else if(st2[i]==b)
            {
                st[i]=')';
                b1++;
            }
        }
        for(i=0; i<n; i++)
        {
            if(a1>=b1 && st2[i]!=a && st2[i]!=b)
            {
                st[i]=')';
            }
            else if(a1<b1 && st2[i]!=a && st2[i]!=b)
            {
                st[i]='(';
            }
        }

        //cout<<st<<endl;

        ll ans=solve(st,n);

        if(ans==0)
        {
            for(i=0; i<n; i++)
            {
                if(st2[i]==a)
                {
                    st[i]='(';
                    a1++;
                }
                else if(st2[i]==b)
                {
                    st[i]='(';
                    a1++;
                }
            }
            for(i=0; i<n; i++)
            {
                if(a1>=b1 && st2[i]!=a && st2[i]!=b)
                {
                    st[i]=')';
                }
                else if(a1<b1 && st2[i]!=a && st2[i]!=b)
                {
                    st[i]='(';
                }
            }

            //cout<<st<<endl;

            ans=solve(st,n);
        }

        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}