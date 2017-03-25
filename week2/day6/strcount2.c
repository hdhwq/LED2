#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}



int main()
{
	char str[64];
	scanf("%s", str);
	qsort(str, strlen(str), 1, cmp);

	puts(str);
	int i=0;
	char ch;
	int cnt=0;
	while(str[i]!='\0')
	{
		if(cnt==0)
		{
			ch = str[i];
			cnt++;
			i++;
		}
		else if(str[i]==ch)
		{
			cnt++;
			i++;
		}
		else
		{
		printf("ch=%c,time=%d\n", ch, cnt);
		cnt=0;
		}
	}
	printf("ch=%c,time=%d\n", ch, cnt);
	return 0;
}
