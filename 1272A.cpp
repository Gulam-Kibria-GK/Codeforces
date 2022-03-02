#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>a;
    while(a--)
    {
        ll arr[3+2];
        for(i=0; i<3; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        if(arr[0]==arr[1] && arr[1]==arr[2]);
        else if(arr[1]==arr[0] && arr[1]!=arr[2])
        {
            arr[0]++;
            arr[1]++;
            if(arr[1]<arr[2])
                arr[2]--;
        }
        else if(arr[1]==arr[2] && arr[1]!=arr[0])
        {
            arr[2]--;
            arr[1]--;
            if(arr[0]<arr[2])
                arr[0]++;
        }
        else
        {
            if(arr[0]<arr[1])
                arr[0]++;
            if(arr[2]>arr[1])
                arr[2]--;
        }
        cout<<(abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2]))<<endl;
    }
}