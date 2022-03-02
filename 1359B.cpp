#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,t,s,i,j,k;
char a[100001];
int main()
{
    cin >> t;
    while(t--)
    {
        int b=0,d=0;
        cin >> n >> m >> x >> y;
        for(i=0;i<n;i++)
        {
            cin >> a;
            for(j=0;j<m;j=j+k)
            {
                if(a[ j ]== '.' && a[ j+1] == '.')
                {
                    d++;
                    k=2;
                }
                else if(a[ j ] == '.' && a[ j+1] != '.')
                {
                    b++;
                    k=2;
                }
                else k=1;
            }
        }
         if(2*x <= y) cout << b*x +d*x*2 << '\n' ;
            else cout << d*y + b*x << '\n';
    }
}