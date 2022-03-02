#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,x,y;
    cin>>a;
    while(a--)
    {
        cin>>n;
        ll cnt=0,f=0;
        while(true)
        {
            if(n==1){
                f=0;break;
            }
            if(n%6==0)
            {
                f=0;
                n/=6;
                cnt++;
            }
            else
            {
                f++;
                n*=2;
                cnt++;
            }
            if(f==2)
            {
                break;
            }
        }
        if(f>=2){
            cout<<-1<<endl;
        }else{
            cout<<cnt<<endl;
        }
    }
}