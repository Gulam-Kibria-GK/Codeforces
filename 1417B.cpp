#include<bits/stdc++.h>
using namespace std;
long long t,n,m;
int main()
{
    cin >> t;
    while(t--)
    {
        long long i,x=0,y=0,c=0;
        cin >> n >> m;
        vector<long long>a(n),b(n);
        for(i=0;i<n;i++)
        {
            cin >> a[ i ];
            b[ i ]=a[ i ];
        }
        sort(b.begin(),b.end());
        for(i=0;i<n-1;i++)
        {
            if(b[ i ]+b[i+1]>=m)
            {
                x=b[ i ];
                y=b[ i+1 ];
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(x!=y)
            {
                if(a[ i ]<=x)cout << "0 ";
                else cout << "1 ";
            }
            else
            {
                if(a[ i ]<x)cout << "0 ";
                else if(a[ i ]>x)cout << "1 ";
                else
                {
                    cout << c%2 << ' ';
                    c++;
                }
            }
        }
        cout << endl;
    }
}