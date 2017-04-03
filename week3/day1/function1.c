#include <stdio.h>
#include <string.h>

int mystrlen(char str[]);
void mystrcat(char str1[],char str2[]);
int mystrcmp(char str1[], char str2[]);
void mystrcpy(char dst[], char src[]);

char str3[100];

int main()
{
	char cho;
	printf("strlen=a,strcat=b,strcmp=c,strcpy=d\n");
	scanf("%s", &cho);
	if(cho=='a')
	{
		char str[64];
		scanf ("%s", str);
		printf("strlen=%d\n", mystrlen(str));
	}
	else if(cho=='b')
	{
		char str1[64];
		char str2[64];

		scanf ("%s", str1);
		scanf ("%s", str2);
	    mystrcat(str1,str2);
		puts(str1);
		
	}

	else if(cho=='c')
	{	
		char str3[64];
		char str4[64];

		scanf ("%s", str3);
		scanf ("%s", str4);
		printf("%d\n", mystrcmp(str3,str4));
	}
	else if(cho=='d')
	{
		char src[64];
		char dst[64];

		scanf("%s",src);
		mystrcpy(src,dst);
		puts(dst);	
	
	}
	
   return 0;
}


int mystrlen(char str[])
{
	int i=0;
	while(str[i++]!='\0')
	;
	i=i-1;
	return i;
}


void mystrcat(char str1[],char str2[])
{


	int i=0,j=0;
	while (str1[i++]!='\0')
	;
	i-=1;
	while(str2[j++]!='\0')
	{
		str1[i++]=str2[j-1];

	}
	str1[i]='\0';

}


int mystrcmp(char str1[], char str2[])
{
	int i=0,j=0;
	while(1)
	{
		if(str1[i++]==str2[j++])
		{
		if (str1[i]=='\0')
			return 0;
			break;	
		}
		else if (str1[i++]>str2[j++])
		{
			return 1;
			break;
		}
		else 
		{
			return -1;
			break;
		}
	}
	
}
	

void mystrcpy(char src[], char dst[])
{
	int i=0, j=0;
	while(src[i]!='\0')
	{
		dst[j]=src[i];
		i++;
		j++;
	}
    dst[j]='\0';

}


