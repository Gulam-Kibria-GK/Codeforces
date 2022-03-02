#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    char st[10000];
    char st2[10000];
    char st3[10000];
    cin>>st;
    cin>>st2;
    n=strlen(st);
    for(i=0;i<n;i++)
    {
        if(st[i]==st2[i])
        {
            st3[i]='0';
        }
        else
        {
            st3[i]='1';
        }
    }
    cout<<st3<<"\n";
    return 0;
}