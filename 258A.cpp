#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,f=1;
    string st;
    cin>>st;
    n=st.size();
    for(i=0;i<n;i++)
    {
        if(st[i]=='0')
        {
            f=0;x=i;
            break;
        }
    }
    if(f==0)
    {
        for(i=0;i<n;i++)
        {
            if(i!=x)
                cout<<st[i];
        }
    }
    else
    {
        for(i=0;i<n-1;i++)
            cout<<st[i];
    }
    cout<<endl;
    return 0;
}