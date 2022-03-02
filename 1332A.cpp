#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,x,y,x1,x2,y1,y2;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >>d ;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        if(((x1 <= x-a+b && x-a+b <= x2 ) && (x1 < x2 || a+b==0)) && ((y1<=y-c+d && y-c+d<= y2) && (y1<y2 || c+d==0)))
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}