#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c,d,x=0,f=0;
    cin>>n;
    string st;
    while(n--)
    {
        f=0;x=0;
        cin>>st;
        m=st.size();
        char ch=st[0];
        if(ch=='z')f=1;
        for(i=0; i<m; i++)
        {

            if(st[i]==ch)
            {
                if(f!=1)ch++;
                else ch='a',f=0;
            }
            else
            {
                x=1;
                cout<<"NO"<<endl;
                break;
            }
            if(ch=='z')f=1;
        }
        if(x==0)
         cout<<"YES"<<endl;
    }
}