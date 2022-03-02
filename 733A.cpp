#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,max=0,n,p=0,k=0,valu;
    char st[10000];
    cin>>st;
    n=strlen(st);
    for(i=0;i<n;i++)
    {
            k+=1;
        if(st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' || st[i]=='Y')
        {
            p=1;
            if(max<k)
            {
                max=k;
            }
            k=0;
        }
    }
    if(st[n-1]!='A' && st[n-1]!='E' && st[n-1]!='I' && st[n-1]!='O' && st[n-1]!='U' && st[n-1]!='Y')
        {
            valu=k+1;
            if(max<valu)
            {
                max=valu;
            }
        }
    cout<<max<<"\n";
    return 0;
}