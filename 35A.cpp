#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    int a,cc,b;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d",&cc);
    while (n--)
    {
        scanf("%d %d",&a,&b);
        if (a==cc)
            cc = b;
        else if (b == cc)
            cc=a;
    }
    printf("%d\n",cc);
    return 0;
}