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
    ll i,j,k,l,n,m;
    ll arr[5];
    for(i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    if((arr[0]+arr[3])==(arr[2]+arr[1]))
    {
        cout<<"YES"<<endl;
    }
    else if((arr[0]+arr[1]+arr[2])==arr[3])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
