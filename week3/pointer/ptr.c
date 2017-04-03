#include "ptr.h"

int pointer_test1()
{
	char *pch;
	int *pi;
	float *pf;
	
	printf("%d,%d,%d\n", sizeof(pch), sizeof(pi), sizeof(pf));

}

int mystrlen(char *str)
{
	char *p = str;
	int cnt=0;
	while(*p!='\0')
	{
		cnt++;
		p++;
	}
	
	return cnt;
}

int mystrcmp(char *str1, char *str2)
{
	char *p1 = str1;
	char *p2 = str2;
	while(1)
	{
		if(*p1 > *p2)
			return 1;
		else if(*p1 < *p2)
			return -1;
		else if(*p1 == *p2)
		{
			if(*p1 == '\0')
				return 0;
			else
			{
				p1++;
				p2++;
			}
		}
	}
}

void mystrcpy(char *dst, char *src)
{
	while(*src!='\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';

}

void mystrcat(char str1[], char str2[])
{
	char *p1 = str1;
	char *p2 = str2;
	while(*p1 != '\0')
		p1++;
	while(*p2 != '\0')	
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
}

void pointer_test2()
{
	char str[20];
	char *pstr="hellohwq";
	mystrcpy(str, pstr);
	puts(str);
	printf("%d\n", mystrcmp(str,pstr));
	mystrcat(str,pstr);
	puts(str);
	
}

static void move_data(char arr[], int len, int num)
{
//	array_display(arr, len);
	char arr2[LEN];
	int i;
	arr2[0] = arr[0];
	for(i=0; i<len-1; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[i] = arr2[0];
	num--;
	if(num)
		move_data(arr, len, num);
	
}

void array_display(char arr[], int len)
{
	int i=0;
	while(arr[i]!='\0')
	{
		printf("%c",arr[i]);
		i++;
	}
	printf("\n");
}

void pointer_ring()
{
	int num;
	char arr[LEN];
	printf("inset arr[] and num\n");
	scanf("%s%d", arr, &num);
//	array_int(arr, LEN);
	move_data(arr, strlen(arr), num);
	array_display(arr, strlen(arr));

}

void pointer_test3()
{
	int a = 10;
	int *pa = &a;
	int *pb = (int *)malloc(4);
	*pb = -10;
	*pa += *pb;
	free(pb);
	printf("*pa=%d\n", a);

}

void swag(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;

}

void pointer_test4()
{
	int a = 10;
	int b = 20;
	swag(&a,&b);
	printf("%d,%d\n", a, b);
}


void pointer_test5()
{
#if 0
	int a ,*pa;
	char b ,*pb;
	pa = &a;
	pb = &b;
	*pa =40;
//pa =pb

printf("%d\n", *pa);

#endif
int a[2][3]={0,1,2,33,44,55};
int *p[4],k;
int b[]={0,1,2,3,4,5,6,7,8,9,10,11};
for(k=0; k<4; k++)
	p[k] = &b[k*3];
printf("%d\n", p[3][0]);

//printf("%d\n", *p);
}





