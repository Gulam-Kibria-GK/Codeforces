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
    cin>>n;
    while(n--)
    {
        cin>>a;
        ll arr[2*a+5];
        for(i=0; i<a*2; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(2*a));
//        for(i=0; i<a*2; i++)
//        {
//            cout<<arr[i]<<" ";
//        }
        vector<ll>v,v1;
        //cout<<endl;
        ll f=a,f1=a;
        ll fa,fa1;
        if(a%2==0)
            f++,f1--;
        fa=f,fa1=f1;
        ll su=0,su1=0;
        //cout<<f<<" "<<f1<<endl;
        for(i=0; i<a*2; i++)
        {
            if((su<=su1 && f))
            {
                su+=arr[i];
                f--;
                v.push_back(arr[i]);
            }//,cout<<"ff"<<su;
            else if((su1<su && f1))
            {
                su1+=arr[i];
                f1--;
                v1.push_back(arr[i]);
            }//,cout<<"gg"<<su1;

        }
       // cout<<v.size()<<" "<<v1.size()<<endl;
        //cout<<v[(fa/2)]<<" "<<v1[(fa1/2)]<<endl;
        cout<<abs(v[(fa/2)]-v1[(fa1/2)])<<endl;
    }
}
