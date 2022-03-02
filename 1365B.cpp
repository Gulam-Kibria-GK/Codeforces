#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[505],b[505],j,temp,temp1;
    cin >> t;
    while(t--)
    {
        int c=1,x=0,y=0;
        cin >> n;
        for(i=0;i<n;i++)cin >> a[ i ];
        for(i=0;i<n;i++)
        {
            cin >> b[ i ];
            if(b[ i ]==0)x++;
            else y++;
        }
       for(i=0;i<n-1;i++)
       {
          if(a[ i ]>a[ i+1 ])c=0;
       }
       if(x>0 && y>0)c=1;
      printf(c?"Yes\n":"No\n");
    }
}