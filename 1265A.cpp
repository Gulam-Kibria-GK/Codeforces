#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>a;
    while(a--)
    {
        string st,st2;
        st2="abc";
        cin>>st;
        st="1"+st+"1";
        ll f=0;
        n=st.size();
        for(i=1; i<n-2; i++)
        {
            if(st[i]!='?')
                if(st[i]==st[i+1])
                    f=1;
        }
        if(f==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=1; i<n-1; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(st[i]=='?')
                    {
                        if(st[i-1]!=st2[j] && st2[j]!=st[i+1])
                        {
                            st[i]=st2[j];
                            break;
                        }
                    }
                }
            }
            for(i=1; i<n-1; i++)
            {
                cout<<st[i];
            }
            cout<<endl<<endl;
        }
    }
}