#include <stdio.h>

int main()
{  /* 
	int a;
	int b;
	scanf("%d%d",&a,&b);
	printf("x=%d,y=%d\n",a,b);
	return 0;
	*/
	FILE *fp;
	fp= fopen("test.txt","w");
	fprintf(fp,"first write\n");
	fprintf(stdout,"second write\n");
	fclose(fp);
	
	}
