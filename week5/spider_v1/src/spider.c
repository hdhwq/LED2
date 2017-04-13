#include "spider.h"
#include "Confparser.h"


int main()
{
	//printf("hello spider\n");
	Config * gconfig = init_config();


	load_config(gconfig);
	printf("------%d\n", gconfig ->max_job_num);
		
	return 0;
}





