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
    ll i,j,k,l,n,m,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n+4];
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        ll start=1;
        while(start<=n)
        {
            ll value=arr[start];
            ll last=start;
            for(i=start+1; i<=n; i++)
            {
                if(value>arr[i])
                {
                    value=arr[i];
                    last=i;
                }
            }
            for(i=last; i>start; i--)
            {
                swap(arr[i],arr[i-1]);
            }
            if(start==last)
                start++;
            else
                start=last;
        }
        for(i=1; i<=n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
