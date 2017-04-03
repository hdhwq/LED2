#include "struct.h"

int main()
{
	printf("please input number of man\n");
	int num;
	scanf("%d", &num);

	man_t *parr = man_init(num);
	char name[20];
	while(1)
	{
		printf("please input name of man\n");
		do{
			scanf("%s", name);
		}while(name[0] == '\n');
		
		if(strcmp(name,"exit")==0)
			break;
		man_vote(parr,num,name);
	}
		
		man_disp(parr,num);

	return 0;
}
