#include <stdio.h>

int main ()

{
	int a[100]={1,1};
	
	
	int mon,i;
	scanf ("%d",&mon);

	for(i=2;i<mon;i++)
	{
	
	a[i]= a[i-1]+a[i-2];
	
	}
	printf("%d\n",a[i-1]);
	return 0;
}
