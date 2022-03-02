#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,t,j,k,n,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
            if((2*min(a,b))<max(a,b)){
            cout<<"NO"<<endl;
        }
        else{
            if((((2*a)%3==0) && ((2*b)%3==0))||(((2*a)%3==1) && ((2*b)%3==2))||(((2*a)%3==2) && ((2*b)%3==1)))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}