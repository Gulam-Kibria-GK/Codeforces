#include<bits/stdc++.h>
using namespace std;
struct ab
{
    char a[10000];
    char b[10000];
};
int main()
{
    int i,j,m,l,n,x;
    cin>>n>>x;
    char st[100];
    struct ab ar[x+3];

    for(i=0; i<x; i++)
    {
        cin>>ar[i].a>>ar[i].b;
    }

    for(j=0; j<n; j++)
    {
        scanf("%s",st);
        for(i=0; i<x; i++)
        {
            if((strcmp(ar[i].a,st)==0) || (strcmp(ar[i].b,st)==0))
            {
                m=strlen(ar[i].a);
                l=strlen(ar[i].b);
                if(m<=l)
                {
                    cout<<ar[i].a<<" ";
                }
                else
                {
                    cout<<ar[i].b<<" ";
                }
                break;
            }
        }

    }
    cout<<endl;
    return 0;
}