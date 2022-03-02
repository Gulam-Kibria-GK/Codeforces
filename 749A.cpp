#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,j=0,k,j2=0;
    cin>>n;
    if(n%2==0)
    {
        for(i=2; i<=n; i+=2)
        {
            j++;
        }
        k=j;
        cout<<k<<endl;
        cout<<"2";
        for(i=1; i<k; i++)
        {
            cout<<" "<<"2";
        }
        cout<<endl;
    }
    if(n%2==1)
    {
        for(i=2; i<=n; i+=2)
        {
            j2++;
        }
        k=j2;
        cout<<k<<endl;
        for(i=1; i<k; i++)
        {
            cout<<"2"<<" ";
        }
        cout<<"3"<<"\n";
    }

    return 0;
}