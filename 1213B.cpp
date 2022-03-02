#include<bits/stdc++.h>
using namespace std;
int  t,n,a[1000000],i,j,mini,c ;
int main()
{
    //int  t,n,a[100000],i,j,mini,c ;
    cin >> t;
    while(t--)
    {
        c = 0,mini = 0;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }

    mini = a[n-1];
    for(i = n-2; i >= 0; i--)
    {
        if(a[i] > mini)
        {
            c++;
        }
        else
        {
            mini = a[i];
        }
    }
    cout << c << endl;

    }
    return 0;


}