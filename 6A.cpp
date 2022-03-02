#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    for(int i=0;i<4;i++)cin>>a[i];
    sort(a,a+4);
    if((a[3]<(a[2]+a[1])) ||(a[2]<(a[1]+a[0])))
        cout<<"TRIANGLE"<<endl;
    else if((a[3]==(a[2]+a[1]))||(a[2]==(a[1]+a[0])))
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
    return 0;
}