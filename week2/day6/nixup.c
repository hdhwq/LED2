#include <stdio.h>
#include <string.h>
int main ()
{
	char str[20];
	gets(str);

	int len;
	len = strlen(str);
	int i;
	for(i=len-1; i>=0; i--)
			printf("%c", str[i]);
	puts("");

	return 0;
}
