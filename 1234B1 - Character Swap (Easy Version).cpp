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
    ll i,j,t,k,l,n,m,a;
    cin>>t;
    while(t--)
    {
        string st,st2,st3="",st4="";
        cin>>n>>st>>st2;
        ll f=0,ff=1,ff1=1;
        for(i=0; i<n; i++)
        {
            if(st[i]!=st2[i])
                f++;
            if(f==1 && ff==1)
            {
                ff=0;
                st3+=st[i];
                st3+=st2[i];
            }
            if(f==2 && ff1==1)
            {
                ff1=0;
                st4+=st[i];
                st4+=st2[i];
            }
        }
        //cout<<st3<<" "<<st4<<endl;
        if(f==2)
        {
            if(st3==st4)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}
