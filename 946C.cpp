#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,x;
    char c='a';
    string st;
    cin>>st;
    n=st.length();
    if(n<26)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(st[i]<=c)
        {
            st[i]=c;
            c++;
        }
        if(c>'z')
            break;
    }
    if(c>'z')
    cout<<st<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}