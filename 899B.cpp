#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,f=0;
    cin>>n;
    int arr[100]= {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
    int arr2[n];
    for(i=0; i<n; i++)
    {
        cin>>arr2[i];
    }
    for (j=0; j<48; j++)
    {
        k=j;
        for(i=0; i<n; i++)
        {
            if (arr[k++]==arr2[i])
            {
                f=f+1;;
                continue;
                if(n==f)
                    break;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(n==f)
            break;
    }
    if (f==n)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}