#include <stdio.h>

int main()
{
	int num;
	int i=0;
	int a[100]={0};
	scanf("%d",&num);
	while(num!=0)
	{
		a[i]= num%2;
		i++;
		num/=2;
			
	}
	for(i;i>0;i--)
		printf("%d",a[i-1]);
	printf("\n");
	
	return 0;

}

