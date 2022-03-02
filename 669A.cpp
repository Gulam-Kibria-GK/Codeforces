#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     long long i,j,k,l,n,m,a,b,f;
    cin>>n;
        if(n==1 || n==2){
            cout<<1<<endl;
        }
        else {
                m=(n/3)*2;
        if(n%3)m++;
                cout<<m<<endl;
        }

}