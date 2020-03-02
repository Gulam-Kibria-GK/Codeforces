/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>a;
    while(a--){
        cin>>n;
        b=0;
        ll ne=0;
        ll po=0;
        ll arr[n+2];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)b++;
            if(arr[i]<0)ne+=arr[i];
            else po+=arr[i];
        }
        po+=b;
        if(po+ne==0){
            b++;
        }
        cout<<b<<endl;
    }
}
