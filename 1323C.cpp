#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a=0,b=0,ans=0;
    string st;
    cin>>n>>st;
    for(i=0; i<n; i++)
    {
        if(st[i]==')')
            a++;
        else
            b++;
    }
    if(a!=b || n%2)
    {
        cout<<-1<<endl;
        return 0;
    }
    a=0;
    for(i=0; i<n; i++)
    {
        if(st[i]==')')
            a--;
        else
            a++;
        if(a<0 || (a==0&&st[i]=='('))
            ans++;
    }
    cout<<ans<<endl;
}