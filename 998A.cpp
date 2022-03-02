#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m=100000,a,b;
    cin>>n;
    int arr[n+4];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(m>arr[i])m=arr[i],j=i;
    }
    if(n==1 || (n==2 && arr[0]==arr[1])){cout<<-1<<endl;return 0;}
    cout<<1<<endl;
    cout<<j+1<<endl;
    return 0;
}