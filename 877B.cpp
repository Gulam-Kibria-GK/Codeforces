#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5010]={0}, b[5010]={0}, i, j;
    string s;
    cin>>s;
    int l= s.size();
    s="*"+s;
    for(i=1; i<=l; i++)
    {
        if(s[i]=='a')
        {
            a[i]= a[i-1]+1;
            b[i]=b[i-1];
        }
        else
        {
            b[i]= b[i-1]+1;
            a[i]=a[i-1];
        }
    }
    int maxx= -INT_MAX;
    for(i=1; i<=l; i++)
    {
        for(j=i; j<=l; j++)
        {
            maxx= max(maxx, (a[i]+b[j]-b[i-1]+a[l]-a[j]));
 
        }
    }
    cout<<maxx<<endl;
}