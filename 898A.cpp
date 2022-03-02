#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,a,b,x;
    cin>>n;
    x=n%10;
    a=10-x;
    if(x>=5)
    {
        n=n+a;
    }
    else
    {
        n=n-x;;
    }
    cout<<n<<endl;
    return 0;
}