#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,x,n,f,f2=1;
    cin>>n;
    char st[n];
    for(i=0; i<n; i++)
    {
        cin>>st[i];
    }
    for(i=0; i<n; i++)
    {
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || st[i]=='y')
        {
            f=1;
        }
        else
        {
            cout<<st[i];
            f=0;
            f2=1;
        }

        if(f==1 && f2==1)
        {
            cout<<st[i];
            f2=0;
        }
    }
    cout<<endl;
    return 0;
}