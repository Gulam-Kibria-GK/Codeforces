#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m;
    cin>>n;
    int c=0;
    for(i=1;i<n;i++)
    {
        if(i+((int)((float)(n-i)/i)*i)==n)
            c++;
    }
    cout<<c<<endl;
}