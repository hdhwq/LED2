#include <stdio.h>

int main()
{
	int num;
	 while(1)
	 {
	 scanf ("%d", &num);
	 if(num==1)
		 printf("Today is monday\n");
	 else if(num==2)
		 printf("Today is tuesday\n");
	 else if(num==3)
		 printf("Today is wednesday\n");
	 else if(num==4)
		 printf("Today is thursday\n");
	 else if(num==5)
		 printf("Today is friday\n");
	 else if(num==6)
		 printf("Today is saturday\n");
	 else if(num==7)
		 printf("Today is sunday\n");
	 else
		 printf("please inset number 1~7\n");
	 }
	  
	 return 0;
}

