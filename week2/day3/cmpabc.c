#include <stdio.h>

int max1(int x,int y)
{
	int  m;
	if(x>y)
	m = x;
	else 
	m = y;
	
	return m;
}
int min1(int x,int y)
{
	int  n;
	if(x>y)
	n = y;
	else  
	n = x;
	
	return n;
}
int main()
{
	int a,b,c,max,mid,min;
	scanf("%d%d%d", &a, &b, &c);
	if(a>b&&a>c)
	{
	max = a;
	mid = max1(b,c);
	min = min1(b,c);
	printf("max=%d mid=%d min=%d\n", max,mid,min);
	}
	else if(b>a&&b>c)
	{
	max = b;
	mid = max1(a,c);
	min = min1(a,c);
	printf("max=%d mid=%d min=%d\n", max,mid,min);
	}
	else if(c>a&&c>b)
	{
	max = c;
	mid = max1(b,a);
	min = min1(a,b);
	printf("max=%d mid=%d min=%d\n", max,mid,min);
	}
	
	return 0;
}
