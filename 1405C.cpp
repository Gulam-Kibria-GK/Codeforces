#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--)
    {
        string st,st2="";
        ll x=0,y=0,z=0;
        cin>>a>>b>>st;
        for(i=0; i<b; i++)
        {
            st2+=st[i];
            if(st[i]=='0')
                x++;
            else if(st[i]=='1')
                y++;
            else
                z++;
        }
        if(x!=y && (abs(x-y)>z))
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll siz=a%b;
        if(siz!=0)
        {
            for(i=siz; i<b; i++)
            {
                st+=st2[i];
            }
        }
        a=st.size();
        //cout<<st<<endl;
        ll flag=1;
        for(i=0; i<a; i+=b)
        {
            ll ff=0;
            x=0,y=0,z=0;
            for(j=0; j<b; j++)
            {
                if(st[i+j]==st2[j])
                {
                    ff+=1;
                }
                else if(st2[j]=='?')
                {
                    st2[j]=st[i+j];
                    ff+=1;
                }
                else if(st[i+j]=='?')
                {
                    st[i+j]=st2[j];
                    ff+=1;
                }

                if(st2[j]=='0')
                    x++;
                else if(st2[j]=='1')
                    y++;
                else if(st2[j]=='?')
                    z++;
            }
            if((x!=y && (abs(x-y)>z)) || ff!=b)
            {
                flag=0;
                break;
            }
        }
        //cout<<flag<<endl;
        //cout<<st<<endl;
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}