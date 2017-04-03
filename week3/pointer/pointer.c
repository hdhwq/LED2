#include<stdio.h>
int main()
{
	
	int a=1;
	char ch = 'a';
	float f=1.2;
int	*pa;
pa= &a;
char *pch ;
pch= &ch;
float *pf;
pf= &f;
	printf("%d%c%f\n", a, ch, f);
	printf("%x,%c,%f\n", *pa, *pch, *pf);

	return 0;
}
