#include <stdio.h>

void fun1(int num)
{
	int b = num %10;
	printf("%d\n",b);
	num = num / 10;
	if(num!=0)
		fun1(num);
	else
		return;
}


int main()
{	
	int num;
	scanf("%d", &num);
	fun1(num);
 return 0;
}
