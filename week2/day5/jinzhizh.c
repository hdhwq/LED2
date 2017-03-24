#include <stdio.h>

int main()
{
	char b[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	int num, jz;
	int i=0;
	char a[100]={0};
	printf("please inset jinzhi and number\n");
	scanf("%d%d",&jz ,&num);
	while(num!=0)
	{
		a[i]= num%jz;
		i++;
		num/=jz;
	}
	for(i;i>0;i--)
	{
		printf("%c", b[a[i-1]]);
	
	}
	printf("\n");
	
	return 0;

}
