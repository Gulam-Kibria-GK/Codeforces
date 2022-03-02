#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s=0,sum=0,ar[100007];
    char st[100007];
    cin>>st;
    n=strlen(st);
    ar[0]=0;
    for(i=1;i<n;i++)
    {
        if(st[i-1]==st[i])
        {
            sum+=1;
            ar[i]=sum;
        }
        else
        {
            sum+=0;
            ar[i]=sum;
        }
    }
    int a,b,x,valu;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>a>>b;
        valu=ar[b-1]-ar[a-1];
        cout<<valu<<endl;
    }
    return 0;
}