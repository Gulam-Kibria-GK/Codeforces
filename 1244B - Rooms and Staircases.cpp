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
    ll i,j,k,l,n,m,a,b;
    cin>>a;
    while(a--)
    {
        cin>>n;
        string st,st2;
        cin>>st;
        st2=st;
        reverse(st2.begin(),st2.end());
        ll f1=-1,f2=-1;
        for(i=0; i<n; i++)
        {
            if(st[i]=='1')
            {
                f1=i;
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            if(st2[i]=='1')
            {
                f2=i;
                break;
            }
        }
        //cout<<f1<<" "<<f2<<endl;
        ll kk;
        kk=min(f2,f1);
        // kk++;
        if(kk==-1)
        {
            cout<<n<<endl;
        }
        else
            cout<<2*(n-kk)<<endl;
    }
}
