#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,m,s,ab,j,k,f=1,arr[125]={};
    char str[1000];
    scanf("%d",&n);
    scanf("%s",str);
    ab=strlen(str);
    for(i=0; i<ab; i++)
    {
        if(str[i]==97)
            arr[97]=arr[97]+1;
        else if(str[i]==98)
            arr[98]=arr[98]+1;
        else if(str[i]==99)
            arr[99]=arr[99]+1;
        else if(str[i]==100)
            arr[100]=arr[100]+1;
        else if(str[i]==101)
            arr[101]=arr[101]+1;
        else if(str[i]==102)
            arr[102]=arr[102]+1;
        else if(str[i]==103)
            arr[103]=arr[103]+1;
        else if(str[i]==104)
            arr[104]=arr[104]+1;
        else if(str[i]==105)
            arr[105]=arr[105]+1;
        else if(str[i]==106)
            arr[106]=arr[106]+1;
        else if(str[i]==107)
            arr[107]=arr[107]+1;
        else if(str[i]==108)
            arr[108]=arr[108]+1;
        else if(str[i]==109)
            arr[109]=arr[109]+1;
        else if(str[i]==110)
            arr[110]=arr[110]+1;
        else if(str[i]==111)
            arr[111]=arr[111]+1;
        else if(str[i]==112)
            arr[112]=arr[112]+1;
        else if(str[i]==113)
            arr[113]=arr[113]+1;
        else if(str[i]==114)
            arr[114]=arr[114]+1;
        else if(str[i]==115)
            arr[115]=arr[115]+1;
        else if(str[i]==116)
            arr[116]=arr[116]+1;
        else if(str[i]==117)
            arr[117]=arr[117]+1;
        else if(str[i]==118)
            arr[118]=arr[118]+1;
        else if(str[i]==119)
            arr[119]=arr[119]+1;
        else if(str[i]==120)
            arr[120]=arr[120]+1;
        else if(str[i]==121)
            arr[121]=arr[121]+1;
        else if(str[i]==122)
            arr[122]=arr[122]+1;

    }
    for (i=97; i<=122; i++)
    {
        if(arr[i]%n!=0)
        {
            printf("-1\n");
            f=0;
            break;            
        }
    }
    if(f==1)
    {
        for(s=0; s<n; s++)
        {
            for(i=97; i<123; i++)
            {
                j=arr[i]/n;
                if(j!=0)
                {
                    for(m=0; m<j; m++)
                    {
                        printf("%c",i);
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}