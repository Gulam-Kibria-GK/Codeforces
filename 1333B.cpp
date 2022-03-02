#include<bits/stdc++.h>
using namespace std;
int t,n,i,a[100001],b[100001];
int main()
{
    cin >> t;
    while(t--)
    {
        int x=0,y=0,c=0;
        cin >> n;
        for(i=0;i<n;i++)cin >> a[ i ];
        for(i=0;i<n;i++)cin >> b[ i ];
        for(i=0;i<n;i++)
        {
            if(a[ i ]<b[ i ])
            {
                if(x==0)c=1;
            }
            else if(a[ i ]>b[ i ])
            {
                if(y==0)c=1;
            }
            if(a[ i ]==1)x=1;
            if(a[ i ] == -1)y= -1;
        }
        printf(c?"NO\n":"YES\n");
    }
}