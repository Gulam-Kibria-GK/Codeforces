#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,s1,j=0,c1=0,f=0,c2=0;

    cin>>n;
    char ch[n];
    cin>>ch;

    for(j=0; j<n; j++)
    {

        if(ch[j]=='B')
        {

            for(j=j ; j<n ; j++)
            {

                if(ch[j] =='W')
                {

                    c2 = c2+1;
                    break;

                }

            }

        }

    }
    if(ch[n-1] == 'B')
        c1=1;

    cout<<c1+c2<<endl;

    s1=0;
    i=0;
    j=0;

    for(j=0; j<n; j++)
    {

        for(j=j; j<n; j++)
        {

            f=0;

            if(ch[j]=='B')
            {
                s1++;
            }

            else
            {
                f=1;
                break;
            }

        }

        if(s1>0){
             cout<<s1;

              if(j<n-1)
              {
                  cout<<" ";
              }
        }
        s1=0;
    }
    return 0;
}