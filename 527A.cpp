#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,a,b,valu=0,valu2,c=0;
    cin>>a>>b;
    while(1)
    {
        valu+=a/b;
        valu2=a%b;
        a=b;
        b=valu2;
        //c++;
        if(valu2==0)
        {
            break;
        }
    }
    cout<<valu<<endl;
    return 0;
}