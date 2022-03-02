#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,k=0,l=0,m=0,a=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x==25)
        {
            k++;
        }
        else if(x==50)
        {
            k--;
            l++;
        }
        else if(x==100)
        {
            if(k<3)
            {
                k--;
                l--;
            }
            else if(k>=3)
            {
                k-=3;
            }
            m++;
        }
        if(k<0 || l<0)
        {
            a=0;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(a==1)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}