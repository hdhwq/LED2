#include <stdio.h>
int main()
{
int num,i=2;
scanf("%d", &num);

while (i<num)
{
	if(num % i == 0)
	{
		printf("this is not zhishu!\n");
		break;
	}
	
	i++;
}
if (i==num)
	printf("this is  zhishu!\n");
	
return 0;
}
