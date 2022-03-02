#include <stdio.h>
 
int main()
{
	int t,h,m;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &h,&m);
		printf("%d\n", (24*60)-(h*60+m));
	}
}