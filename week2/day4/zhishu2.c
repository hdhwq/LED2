#include <stdio.h>
int main()
{
	int num=100,i=2;

	while (num<=200)
	{
		for(i=2; i<num; i++)
		{
		if(num%i == 0)
		{
			printf("%d,this is not zhishu!\n",num);
			break;
		}
	
	if (i==num-1)

		    printf("%d,this is  zhishu!\n", num);
		}
		num++;
	}
	return 0;
}	

