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
    ll i,j,k,m,l,n;
    string st;
    cin>>n>>m>>st;
    if(n==1 && m!=0){
        cout<<0<<endl;
        return 0;
    }
    if(m==0)
    {
        cout<<st<<endl;
        return 0;
    }
    if(st[0]!='1')
    {
        st[0]='1';
        m--;
        if(m==0)
        {
            cout<<st<<endl;
            return 0;
        }
    }
    for(i=1; i<n; i++)
    {
        if(st[i]!='0')
        {
            st[i]='0';
            m--;
            if(m==0)
            {
                break;
            }
        }
    }
    cout<<st<<endl;
}
