#include<stdio.h> 
	int main()
	{
		char str[10];
		int i = 0;
		gets(str);
		while (str[i])
		{
			if (str[i] >= 'a'&&str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (str[i] >= 'A'&&str[i] <= 'Z')
				str[i] = str[i] + 32;
					i++;
		}
		puts(str);
		return 0;

	}


