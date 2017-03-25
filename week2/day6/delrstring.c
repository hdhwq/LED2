#include <stdio.h>
int main ()
{
	char str[20];
	scanf("%s", str);
	int i=0;
	int j=0;
	str[j++]=str[i++];
	for(i=1; str[i]!='\0'; i++)
	{
		if(str[i]==str[i-1])
		{
		continue;
		}
		else
		{
			str[j++] = str[i];
		}
	}
	str[j]='\0';
	puts(str);

	return 0;


}
