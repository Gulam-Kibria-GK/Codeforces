#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m;
    cin>>m;
    while(m--)
    {
        int aa;
        cin>>aa;
        ///binary search(arr_begin,arr_end,index_number);
        int x=upper_bound(a,a+n,aa)-a;//
        cout<<x<<endl;
    }
    return 0;
}