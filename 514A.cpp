#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,k,t,x;
    char st[100000000];
    cin>>st;
    for(i=0;i<strlen(st);i++)
    {
        t=st[i]-48;
        x=9-t;
        if(x==4 || x==3 || x==2 || x==1 || x==0)
        {
            if(i==0)
            {
                if(x==0)
                continue;
            }
            st[i]=x+48;
        }
    }
    cout<<st<<"\n";
    return 0;
}