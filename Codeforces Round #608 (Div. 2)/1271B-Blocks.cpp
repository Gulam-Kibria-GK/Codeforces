#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;


int main()
{
    ll i,j,k,n,m,c=0,c2=0;
    cin>>n;
    string st;
    cin>>st;
    for(i=0; i<n; i++)
    {
        if(st[i]=='B')
            c++;
        if(st[i]=='W')
            c2++;
    }
    if(c%2==1 && c2%2==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        char ch,ch2='W';
        if(c%2==0)
            ch='B';
        if(c2%2==0)
            ch='W';
        if(ch2==ch)
            ch2='B';
        for(i=0; i<n; i++)
        {
            if(st[i]==ch)
            {
                v.push_back(i);
                if(st[i]==st[i+1])
                {
                    st[i]=ch2;
                    st[i+1]=ch2;
                }
                else
                {
                    char ff=st[i];
                    st[i]=st[i+1];
                    st[i+1]=ff;
                }
            }
        }
        cout<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]+1<<" ";
        }
        cout<<endl;
    }
}
