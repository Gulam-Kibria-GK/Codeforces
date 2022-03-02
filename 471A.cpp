#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,ar[6],s[3],j,max,l=0,ar2[100]= {};
    for(i=0; i<6; i++)
    {
        cin>>ar[i];
        ar2[ar[i]]++;
    }

    max=ar2[ar[0]];
    j=0;
    for(i=1; i<6; i++)
    {
        if(max<ar2[ar[i]])
        {
            max=ar2[ar[i]];
            j=i;
        }
    }
    //cout<<max<<endl;
    for(i=0; i<6; i++)
    {
        if(ar[i]!=ar[j])
        {
            s[l]=i;
            l++;
        }
    }
    //cout<<ar[s[0]]<<" "<<ar[s[1]]<<endl;
    if(max==4)
    {
        if(ar[s[0]]!=ar[s[1]])
        {

            cout<<"Bear"<<endl;
        }
        else if(ar[s[0]]==ar[s[1]])
        {
             cout<<"Elephant"<<endl;
        }

    }
    else if(max==5)
    {
        cout<<"Bear"<<endl;
    }
    else if(max==6)
    {
        cout<<"Elephant"<<endl;
    }
    else
    {
        cout<<"Alien"<<endl;
    }
    return 0;
}