#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;

    cin>>k;
    string st="0123456789";
    while(k--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<9<<endl;
        }
        else if(n==2)
        {
            cout<<"98"<<endl;
        }
        else
        {
            cout<<"989";
            for(i=0; i<n-3; i++)
            {
                cout<<st[i%10];
            }
        cout<<endl;
        }

    }
}