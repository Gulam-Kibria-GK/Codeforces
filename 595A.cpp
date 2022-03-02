#include <stdio.h>
int main()
{
    int a, b, n, m, i, j, z=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d %d", &a, &b);
            if(a == 1 || b == 1)
            {
                z++;
            }
        }
    }
    printf("%d", z);
}