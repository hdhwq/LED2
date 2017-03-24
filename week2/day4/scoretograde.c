#include <stdio.h>

int main()
{
int scor;
 while(1)
 {
 scanf ("%d", &scor);
 if(scor>=90&&scor<=100)
 	printf("grade is A\n");
 else if(scor>=80&&scor<=89)
    printf("grade is B\n");
 else if(scor>=70&&scor<=79)
    printf("grade is C\n");
 else if(scor>=60&&scor<=69)
    printf("grade is D\n");
 else if(scor>=0&&scor<=59)
	 printf("grade is E\n");
 else
	 printf("please inset number 0~100\n");
 }

return 0; 
}

