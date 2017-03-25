#include <stdio.h>
int main ()
{
	char str2[20];
	char str[40];
	scanf("%s", str);
	int i=0;
	int j=0;
	while(str[i++]!='\0')
	{
		str2[j]=str[i-1];
		if(str[i]==str[i-1])
		{
			continue;
		}
		else
			j++;
	}
	str2[j]='\0';
	puts(str2);

	return 0;


}
