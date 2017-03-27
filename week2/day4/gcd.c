#include<stdio.h>



int main ()
{
	printf("please inset two number\n");
	int a,b,i;
	scanf("%d%d",&a,&b);
	while(a%b!=0)
	{
		i = a%b;
		a = b;
		b = i;
	
	}
	printf("GCD=%d\n", b);

return 0;
}
