#include<bits/stdc++.h>
using namespace std;
long long k,i,x,n=1,c=0,d=0,j,z=1,p=0,l,m,s[11];
char a[11]="codeforces";
int main()
{
    cin >> k;
    for(i=0;i<10;i++)s[ i ]=1;
    while(n<k)
    {
        z=1;m=0;
        for(i=0;i<10;i++)
        {
            if(s[ i ]<s[m])m=i;
            z*=s[ i ];
        }
        if(z>=k)
        {
            n=z;
            break;
        }
        s[ m ]++;
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<s[ i ];j++)cout << a[ i ];
    }
}