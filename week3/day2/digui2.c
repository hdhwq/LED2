#include<stdio.h>
#include<string.h>

int fun1(int num)
{
	if(num==0||num==1)
		return 1;
	
		int a;
		a = num*fun1(num-1);
		return a;

}

void array_display(char str[],int len)
{
	if(len<=0)
		return;
	else if(len==1)
	{
		printf("%c\n", str[len-1]);
		return;
	}
	else
	{
		array_display(str,len-1);
		printf("%c\n",str[len-1]);
	}

}

int main()
{
	printf("inset an num for num!\n");
	int num;
	scanf("%d", &num);
	printf("num!=%d\n", fun1(num));

	printf("inset a string for display!\n");
	char str[100];
	scanf("%s", str);
	int len = strlen(str);
	array_display(str,len);

	return 0;

}
