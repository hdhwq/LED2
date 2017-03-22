#include <stdio.h>

int main()
{
	int score;
	scanf("%d", &score);
	switch(score/10)
	{
	case 10 :printf("perfect\n");
	break;
	case 9 :printf("good\n");
	break;
	case 8:printf("not bad\n");
	break;
	case 7 :printf("work hard\n");
	break;
	case 6 :printf("ok\n");
	break;
	case 5 :printf("bad\n");
	break;
	default :printf("please inset 50~100\n");
	
    }
    
    return 0;
}
