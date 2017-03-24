#include <stdio.h>

char *st(int a)
{
	static char x[8];
	switch(a%10)
	 {
	  case 0:x={'A'};
	    break;
	  case 1:x={'B'};
	    break;
      case 2:x={'C'};
	    break;
 	  case 3:x={'D'};
	   break;
	  case 4:x={'E'};
       break;
	  case 5:x={'F'};
       break;
	 }
	return x;
}
int main(void)
{
	char *x=st(11);
	puts(x);
	return 0;
}
