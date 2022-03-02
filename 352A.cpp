#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,x1=0,x2=0;
    cin>>n;
    int a[n+3];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==5)x1++;
        else if(a[i]==0)x2++;
    }
    if(x2==0)cout<<-1<<endl;
    else if(x1<9)cout<<0<<endl;
    else
    {
        x1=(x1/9)*9;
        while(x1--)cout<<5;
        while(x2--)cout<<0;
    }
    return 0;
}