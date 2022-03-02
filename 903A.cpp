#include<bits/stdc++.h>
using namespace std;
#define pr cout<<"YES"<<endl
#define pr2 cout<<"NO"<<endl
int main()
{
    int i,n,a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a<12)
        {
            if(a%3==0 || a%7==0 || a%10==0)
                pr;
            else
                pr2;
        }
        else
            pr;
    }
}