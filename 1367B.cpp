#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m;
        b=0,c=0,k=0;
        for(j=0;j<m;j++){
            cin>>a;
            if((j%2)!=(a%2))k++;

            if(a%2)b++;
            else c++;
        }
        if(abs(b-c)>1 || k%2==1){
            cout<<-1<<endl;
        }
        else
            cout<<(k/2)<<endl;
    }
}