#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,a;
    cin>>n>>m;
    if(m==10 && n==1){cout<<-1<<endl;return 0;}
    for(i=0; i<n; i++)
    {
        if(m==10)
        {
            if(i==0)cout<<1;
            else
                cout<<0;
        }
        else
            cout<<m;
    }
    cout<<endl;
    return 0;
}