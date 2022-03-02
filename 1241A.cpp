#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,c,t,n;


    cin>>t;


    while(t--)
    {
        cin>>n;
        if(n==2){
            cout<<2<<endl;
        }
        else{
            if(n%2==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }

    }

}