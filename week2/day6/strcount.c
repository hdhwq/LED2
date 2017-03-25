#include <stdio.h>

int main()
{
	char str[64];
	scanf("%s", str);
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
