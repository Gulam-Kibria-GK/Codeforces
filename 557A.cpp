#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ll one,two,three,min1,max1,min2,max2,min3,max3,n;
    cin>>n>>min1>>max1>>min2>>max2>>min3>>max3;
    if(min2+min3+max1>=n)
    {
        one=n-min2-min3;
        n-=one;
    }
    else
    {
        one=max1;
        n-=one;
    }
    if(min3+max2>=n)
    {
        two=n-min3;
        n-=two;
    }
    else
    {
        two=max2;
        n-=two;
    }
    three=n;
    cout<<one<<" "<<two<<" "<<three;
    return 0;
}