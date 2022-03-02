#include<bits/stdc++.h>
using namespace std;

#define ll long long
char ch=')';
char ch1='(';
list<char>le,le2,le3;

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    string st;
    cin>>st;
    if(n&1)
    {
        cout<<":("<<endl;
        exit(0);
    }
    ll le,ra,q;
    le=ra=q=0;
    for(i=0; i<n; i++)
    {
        if(st[i]=='(')le++;
        if(st[i]==')')ra++;
        if(st[i]=='?')q++;
    }
    if(le>n/2 || ra>n/2)
    {
        cout<<":("<<endl;
        exit(0);
    }
    ll l,r;
    l=r=0;
    ll baki_le=n/2-le;
    for(i=0; i<n; i++)
    {
        if(st[i]=='?')
        {
            if(baki_le)
            {
                st[i]='(';
                baki_le--;
                l++;
            }
            else
            {
                st[i]=')';
                r++;
            }
        }
        else{
            if(st[i]=='(')l++;
            else r++;
        }
        if((i!=n-1 && l==r) || r>l){
            cout<<":("<<endl;
            exit(0);
        }
    }
    cout<<st<<endl;
    return 0;
}