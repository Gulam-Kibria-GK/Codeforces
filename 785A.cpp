#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0,x;
    char st[1000];
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
    {
        cin>>st;
        getchar();
        x=strlen(st);
        if(x==11 && st[0]=='T')
        {
            sum+=4;
        }
        else if(x==4 && st[0]=='C')
        {
            sum+=6;
        }
        else if(x==10 && st[0]=='O')
        {
            sum+=8;
        }
        else if(x==12 && st[0]=='D')
        {
            sum+=12;
        }
        else if(x==11 && st[0]=='I')
        {
            sum+=20;
        }
    }
    cout<<sum<<"\n";
    return 0;
}