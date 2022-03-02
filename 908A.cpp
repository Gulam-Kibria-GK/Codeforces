#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, c=0;
    char s[55];
    cin>>s;
    j = strlen(s);
    for(i=0;i<j;i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='1')||(s[i]=='3')||(s[i]=='5')||(s[i]=='7')||(s[i]=='9'))
            c++;
    }
    cout<<c<<endl;
}