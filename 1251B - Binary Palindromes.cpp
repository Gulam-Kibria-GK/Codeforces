/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,t,k,l,n,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll c=0,ans=0,p1=0,p2=0;
        while(n--)
        {
            string st;
            cin>>st;
            ll d=0;
            m=st.size();
            if(m&1)
                p1++;
            else
            {
                for(i=0; i<m; i++)
                {
                    if(st[i]=='0')d++;
                }
                if(d&1)c++;
                else p2++;
            }

        }
        if(c%2==0){
                ans+=c;
        }
        else {
            ans+=(c-1);
            if(p1>0)ans++;
        }
        //cout<<p1<<" "<<p2<<" "<<c<<endl;
        ans+=p2;
        ans+=p1;
        cout<<ans<<endl;
    }
}
