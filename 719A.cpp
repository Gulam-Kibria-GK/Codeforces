#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,valu,n;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
        valu=ar[n-1]-ar[n-2];
        if(ar[n-1]==15)
        {
             cout<<"DOWN"<<endl;
        }
        else if(ar[n-2]==1 && ar[n-1]==0)
        {
            cout<<"UP"<<endl;
        }
        else if(valu==1 && ar[n-1]!=15)
        {
            cout<<"UP"<<endl;
        }
        else if(valu==-1 && ar[n-1]!=0)
        {
            cout<<"DOWN"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        return 0;
}