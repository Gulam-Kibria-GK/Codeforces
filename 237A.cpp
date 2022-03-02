#include<bits/stdc++.h>
using namespace std;
#define fr for(i=1;i<n;i++)
int main()
{
    int i,n,a,b,h,m,c=1,max=1;
    cin>>n;
    cin>>a>>b;
    fr
    {
        cin>>h>>m;
        if(a==h && b==m)
        {
            c++;
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=1;
        }
          a=h;
          b=m;
    }
    cout<<max<<endl;
    return 0;
}