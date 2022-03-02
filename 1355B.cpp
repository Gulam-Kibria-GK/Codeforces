#include<bits/stdc++.h>
using namespace std;
long long t,n,a[200005],i;
int main()
{
    cin >> t;
    while(t--)
    {
        int s=0,c=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a[ i ];
        }
       sort(a,a+n);
       for(i=0;i<n;i++)
       {
           c++;
           if(a[ i ] != a[i+1])
           {
               s = s+ c/a[ i ];
               c=c%a[ i ];
           }
       }
       cout << s << "\n";
    }
}